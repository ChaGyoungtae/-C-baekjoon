#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, k;
	scanf("%d %d", &N, &k);
	int* s = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &s[i]);
	}
	if (N < 1 || N > 1000) return 0;
	if (k < 1 || k > N) return 0;
	
	int tmp;
	
	for (int i = N - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (s[j] > s[j + 1]) {
				tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
		}
	}

			printf("%d", s[N - k]);
			free(s);
			return 0;
}