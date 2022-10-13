#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int c;
	scanf("%d", &c);
	int n;
	float av;
	int* s;
	float cnt;
	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		av = 0.0;
		cnt = 0.0;
		s = (int*)malloc(sizeof(int) * n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &s[j]);
			av += s[j];
		}
		av = av / n;;
		for (int j = 0; j < n; j++) {
			if (s[j] > av) cnt++;
		}
		cnt = cnt / n * 100;
		printf("%.3f%%\n", cnt);
		free(s);
	}
}