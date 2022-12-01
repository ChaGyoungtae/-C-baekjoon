#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 1000
#define TRUE 1
#define FALSE 0
typedef int element;
typedef struct { // ť
	element queue[MAX_VERTICES];
	int front, rear;
} QueueType;
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
	return ((q->rear + 1) % MAX_VERTICES == q->front);
}
void enqueue(QueueType* q, element item) {
	if (is_full(q)) {
		error("��ȭ���¿���\n");
	}
	q->rear = (q->rear + 1) % MAX_VERTICES;
	q->queue[q->rear] = item;
}
element dequeue(QueueType* q) {
	if (is_empty(q)) {
		error("������¿���\n");
	}
	q->front = (q->front + 1) % MAX_VERTICES;
	return q->queue[q->front];
}

typedef struct GraphNode { //��������Ʈ ���
	int vertex;
	struct GraphNode* link;
}GraphNode;

typedef struct GraphType_list { //��������Ʈ
	int n;
	GraphNode* adj_list[MAX_VERTICES];
} GraphType_list;
void init_list(GraphType_list* g) {
	int v;
	g->n = 0;
	for (v = 0; v < MAX_VERTICES; v++)
		g->adj_list[v] = NULL;
}
void insert_vertex_list(GraphType_list* g, int v) {
	if (((g->n) + 1) > MAX_VERTICES) {
		fprintf(stderr, "�׷���: ������ ���� �ʰ�\n");
		return;
	}
	g->n++;
}
void insert_edge_list(GraphType_list* g, int u, int v) {
	GraphNode* node;
	if (u > g->n || v > g->n) {
		fprintf(stderr, "�׷���: ���� ��ȣ ����\n");
		return;
	}
	node = (GraphNode*)malloc(sizeof(GraphNode));
	node->vertex = v;
	node->link = g->adj_list[u];
	g->adj_list[u] = node;
}
int visited[MAX_VERTICES];
void init_visited() {
	for (int i = 0; i < MAX_VERTICES; i++) {
		visited[i] = FALSE;
	}
}
void dfs_list(GraphType_list* g, int v) {
	GraphNode* w;
	visited[v] = TRUE;
	printf("%d ", v);
	for (w = g->adj_list[v]; w; w = w->link)
		if (!visited[w->vertex])
			dfs_list(g, w->vertex);
}
int visited[MAX_VERTICES];
void bfs_list(GraphType_list* g, int v) {
	GraphNode* w;
	QueueType q;

	queue_init(&q);
	visited[v] = TRUE;
	printf("%d ", v);
	enqueue(&q, v);
	while (!is_empty(&q)) {
		v = dequeue(&q);
		for (w = g->adj_list[v]; w; w = w->link) {
			if (!visited[w->vertex]) {
				visited[w->vertex] = TRUE;
				printf("%d ", w->vertex);
				enqueue(&q, w->vertex);
			}
		}
	}
}
int main() {
	GraphType_list* g;
	g = (GraphType_list*)malloc(sizeof(GraphType_list));
	init_list(g);
	int n, m, v;
	scanf("%d %d %d", &n, &m, &v);
	int v1, v2;
	g->n = n;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &v1, &v2);
		insert_edge_list(g, v1, v2);
		insert_edge_list(g, v2, v1);
	}
	dfs_list(g, v);
	init_visited();
	printf("\n");
	bfs_list(g, v);
}
