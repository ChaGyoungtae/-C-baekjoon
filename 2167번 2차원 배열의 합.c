#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	int** s = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < m; i++) {
		s[i] = (int*)malloc(sizeof(int) * m);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &s[i][j]);
		}
	}

	int t;
	scanf("%d", &t);
	int a, b, c, d;
	int sum;
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		sum = 0;
		for (int i = a-1; i < c; i++) {
			for (int j = b-1; j < d; j++) {
				sum += s[i][j];
			}
		}
		printf("%d\n", sum);
	}
}