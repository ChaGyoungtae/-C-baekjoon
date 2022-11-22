#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>
#define TRUE 1
#define FALSE 0
#define MAX_VERTICES1 50
#define MAX_VERTICES2 50

typedef int element;
typedef struct { // ť
	element queue[MAX_VERTICES1];
	int front, rear;
} QueueType; 
typedef struct Prim { //����
	int n;
	int weight[MAX_VERTICES1][MAX_VERTICES1];
} Prim;
typedef struct GraphType { //�������
	int n;
	int adj_mat[MAX_VERTICES1][MAX_VERTICES1];
} GraphType;

typedef struct GraphNode { //��������Ʈ ���
	int vertex;
	struct GraphNode* link;
}GraphNode;

typedef struct GraphType_list { //��������Ʈ
	int n;
	GraphNode* adj_list[MAX_VERTICES2];
} GraphType_list;
void error(char* message) { // ����
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void queue_init(QueueType* q) { // �ʱ�ȭ
	q->front = q->rear = 0;
}

int is_empty(QueueType* q) { //����
	return (q->front == q->rear);
}
int is_full(QueueType* q) { //��ȭ
	return ((q->rear + 1) % MAX_VERTICES1 == q->front);
}
void enqueue(QueueType* q, element item) {
	if (is_full(q)) {
		error("��ȭ���¿���\n");
	}
	q->rear = (q->rear + 1) % MAX_VERTICES1;
	q->queue[q->rear] = item;
}
element dequeue(QueueType* q) {
	if (is_empty(q)) {
		error("������¿���\n");
	}
	q->front = (q->front + 1) % MAX_VERTICES1;
	return q->queue[q->front];
}

void init(GraphType* g) { //����ʱ�ȭ
	int r, c;
	g->n = 0;
	for (r = 0; r < MAX_VERTICES1; r++)
		for (c = 0; c < MAX_VERTICES1; c++)
			g->adj_mat[r][c] = 0;
}
void insert_vertex(GraphType* g, int v) {
	if (((g->n) + 1) > MAX_VERTICES1) {
		fprintf(stderr, "�׷���: ������ ���� �ʰ�\n");
		return;
	}
	g->n++;
}
int p;
void insert_edge(GraphType* g, int start, int end) {
	if (start >= g->n || end >= g->n) {
		fprintf(stderr, "�׷���: ���� ��ȣ ����\n");
		return;
	}
	if (g->adj_mat[start][end] == 1) {
		p = -1;
	}
	g->adj_mat[start][end] = 1;
}
void print_adj_mat(GraphType* g) {
	for (int i = 0; i < g->n; i++) {
		for (int j = 0; j < g->n; j++) {
			printf("%2d ", g->adj_mat[i][j]);
		}
		printf("\n");
	}
}
void create_Graph(GraphType* g, int n, int m) {
	int rnd1;
	int rnd2;
	for (int i = 0; i < n; i++)
		insert_vertex(g, i);
		
	for (int i = 0; i < m; i++) {
		rnd1 = rand() % n;
		rnd2 = rand() % n;
		while (1) {
			if (rnd2 != rnd1) break;
			rnd2 = rand() % n;
		}
		insert_edge(g, rnd1, rnd2);
		insert_edge(g, rnd2, rnd1);
		if (p == -1) {
			p = 0;
			i--;
		}
	}
}
int visited[MAX_VERTICES1];
void bfs_mat(GraphType* g, int v) {
	int w;
	QueueType q;

	queue_init(&q);
	visited[v] = TRUE;
	printf("%d�湮 -> ", v);
	enqueue(&q, v);
	while (!is_empty(&q)) {
		v = dequeue(&q);
		for (w = 0; w < g->n; w++) {
			if (g->adj_mat[v][w] && !visited[w]) {
				visited[w] = TRUE;
				printf("%d �湮 -> ", w);
				enqueue(&q, w);
			}
		}
	}
}

int selected[MAX_VERTICES1];
int distance[MAX_VERTICES1];
GraphType* g1;
GraphType_list* g2;
Prim* g3;
void init_list(GraphType_list* g) {
	int v;
	g->n = 0;
	for (v = 0; v < MAX_VERTICES2; v++)
		g->adj_list[v] = NULL;
}
void insert_vertex_list(GraphType_list* g, int v) {
	if (((g->n) + 1) > MAX_VERTICES2) {
		fprintf(stderr, "�׷���: ������ ���� �ʰ�\n");
		return;
	}
	g->n++;
}
void insert_edge_list(GraphType_list* g, int u, int v) {
	GraphNode* node;
	if (u >= g->n || v >= g->n) {
		fprintf(stderr, "�׷���: ���� ��ȣ ����\n");
		return;
	}
	node = (GraphNode*)malloc(sizeof(GraphNode));
	node->vertex = v;
	node->link = g->adj_list[u];
	g->adj_list[u] = node;
}
void make_list(GraphType* g1,int size) {
	init_list(g2);
	for (int i = 0; i < size; i++) {
		insert_vertex_list(g2, i);
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (g1->adj_mat[i][j] == 1) {
				insert_edge_list(g2, i, j);
			}
		}
	}
}
void print_adj_list(GraphType_list* g) {
	for (int i = 0; i < g->n; i++) {
		GraphNode* p = g->adj_list[i];
		printf("���� %d�� ���� ����Ʈ ", i);
		while (p != NULL) {
			printf("-> %d ", p->vertex);
			p = p->link;
		}
		printf("\n");
	}
}
void bfs_list(GraphType_list* g, int v) {
	GraphNode* w;
	QueueType q;

	queue_init(&q);
	visited[v] = TRUE;
	printf("%d �湮 -> ", v);
	enqueue(&q, v);
	while (!is_empty(&q)) {
		v = dequeue(&q);
		for (w = g->adj_list[v]; w; w = w->link) {
			if (!visited[w->vertex]) {
				visited[w->vertex] = TRUE;
				printf("%d �湮 -> ", w->vertex);
				enqueue(&q, w->vertex);
			}
		}
	}
}
void bfs_list2(GraphType_list* g, int v) { //��¹��� ���� �ʺ�켱Ž��
	GraphNode* w;
	QueueType q;

	queue_init(&q);
	visited[v] = TRUE;
	enqueue(&q, v);
	while (!is_empty(&q)) {
		v = dequeue(&q);
		for (w = g->adj_list[v]; w; w = w->link) {
			if (!visited[w->vertex]) {
				visited[w->vertex] = TRUE;
				enqueue(&q, w->vertex);
			}
		}
	}
}

void init_prim(Prim* g) { //�����ʱ�ȭ
	int r, c;
	g->n = 0;
	for (r = 0; r < MAX_VERTICES1; r++) {
		for (c = 0; c < MAX_VERTICES1; c++) {
			g->weight[r][c] = 0;
		}
	}
}

int get_min_vertex(int n) { //�ּ� dist[v]���� ���� ���� ��ȯ
	int v, i;
	for (int i = 0; i < n; i++) 
		if (!selected[i]) {
			v = i;
			break;
		}
		for (i = 0; i < n; i++) 
			if (!selected[i] && (distance[i] < distance[v])) 
				v = i;

		return (v);
}
void prim(Prim* g, int s) {
	int sum = 0;
	int i, u, v;
	for (u = 0; u < g->n; u++) {
		distance[u] = 999;
	}
	distance[s] = 0;
	for (i = 0; i < g->n; i++) {
		u = get_min_vertex(g->n);
		selected[u] = TRUE;
		if (distance[u] == 999) return;
		sum += distance[u];
		printf("���� %d �߰�, ����ġ : %d\n", u, distance[u]);
		for (v = 0; v < g->n; v++) {
			if (g->weight[u][v] != 999)
				if (!selected[v] && g->weight[u][v] < distance[v])
					distance[v] = g->weight[u][v];
		}
	}
	printf("����ġ ��: %d\n", sum);
}
void create_prim(GraphType* g,Prim *g3) {
	g3->n = g->n;
	for (int i = 0; i < g->n; i++) {
		for (int j = 0; j < g->n; j++) {
			if (g->adj_mat[i][j] == 1) {
				g3->weight[i][j] = rand() % 99 + 1;
				g3->weight[j][i] = g3->weight[i][j];
			}
			else if (g->adj_mat[i][j] == 0) {
				g3->weight[i][j] = 999;
				g3->weight[j][i] = 999;
			}
		}
	}
}
void print_prim(Prim *g) {
	char* s = "INF";
	for (int i = 0; i < g->n; i++) {
		for (int j = 0; j < g->n; j++) {
			if (g->weight[i][j] == 999) printf("%5s ",s);
			else printf("%5d ", g->weight[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	srand(time(NULL));
	int menu;
	int n, m; // ����, ����
	int ver;
	while (1) {
		printf("\n�޴�\n");
		printf("0.����\n");
		printf("1.�׷��� ����\n");
		printf("2.BFS \n");
		printf("3.�ּҺ�����Ʈ��(Prim)\n");
		printf("�޴� �Է�: ");
		scanf("%d", &menu);

		if (menu == 0) {
			break;
		}
		else if (menu == 1) {
			printf("����, ������ ���� �Է�: ");
			scanf("%d %d", &n, &m);
			if (m > (n * (n - 1)) / 2) {
				printf("������ ���� �ʹ� �����ϴ�.\n");
				continue;
			}
			g1 = (GraphType*)malloc(sizeof(GraphType));
			init(g1);
			g2 = (GraphType_list*)malloc(sizeof(GraphType_list));
			init_list(g2);
			int a;
			printf("1.������ �׷���\n2.������ ����� �׷���\n");
			printf("�Է�: ");
			scanf("%d", &a);
			if (a == 1) {
				create_Graph(g1, n, m);
				print_adj_mat(g1);
				make_list(g1, n);
				print_adj_list(g2);
			}
			else if (a == 2) {
				if (m < n - 1) {
					printf("������ �����մϴ�\n");
					continue;
				}
				int i;
				while (1) {
					i = 0;
					create_Graph(g1, n, m);
					make_list(g1, n);
					bfs_list2(g2, 0); //��¹��� ���� �ʺ�켱Ž��
					for (i = 0; i < n; i++) {
						if (visited[i] == 0) {
							break;
						}
					}
					if (i == n) {
						print_adj_mat(g1);
						print_adj_list(g2);
						memset(visited, 0, sizeof(visited));
						break;
					}
					else {
						print_adj_list(g2);
						printf("������� ���� �׷����̹Ƿ� �ٽ� �����մϴ�\n");
						init(g1);
						init_list(g2);
						memset(visited, 0, sizeof(visited));
					}
				}
			}
		}
		else if (menu == 2) {
			if (g1 == NULL || g2 == NULL) {
				printf("�׷����� �����ϴ�.\n");
				continue;
			}
			int c;

			printf("1.�������\n2.��������Ʈ\n");
			printf("�Է�: ");
			scanf("%d", &c);
			printf("���� �Է�: ");
			scanf("%d", &ver);
			if (c == 1) {
				bfs_mat(g1,ver);
				memset(visited, 0, sizeof(visited));
			}
			else if (c == 2) {
				bfs_list(g2, ver);
				memset(visited, 0, sizeof(visited));
			}
		}
		else if (menu == 3) {
			if (g1 == NULL){
				printf("�׷����� �����ϴ�.\n");
				continue;
			}
			g3 = (Prim *)malloc(sizeof(Prim));
			init_prim(g3);
			printf("���-----------\n");
			create_prim(g1,g3);
			print_prim(g3);
			while (1) {
				printf("���� �Է�(-1�Է½� ����): ");
				scanf("%d", &ver);
				if (ver == -1) break;
				prim(g3, ver);
				for (int i = 0; i < MAX_VERTICES1; i++) {
					distance[i] = 999;
					selected[i] = 0;
				}
			}
		}
	}
	free(g1);
	free(g2);
	free(g3);
}