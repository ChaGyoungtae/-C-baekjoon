#include <stdio.h>
int main(void) {
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	int min = m;
	int sum = 0;
	int cnt = 0;
	int j;
	for (int i = n; i <= m; i++) {
		if (i <= 2) continue;
		else {
			for (j = 2; j < i; j++) { 
				if (i % j == 0) {
					cnt++;
				}
			}
			if (cnt == 0) {
				printf("%d\n", i);
				sum += i;
				if (min > i) min = i;
			}
			cnt = 0;
		}
	}
	if (sum == 0) printf("-1");
	else printf("%d\n%d", sum, min);
}