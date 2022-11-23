#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int cur = 0;
	int cnt = 0;
	int i,j;
	for (i = 1; i <= n; i++) {
		cur = 0;
		j = 10;
		if (i <= 10) {
			cur += i;
		}
		else {
			while (1) {

				cur = cur + i % j / (j / 10);
				if (i % j == i) break;
				j = j * 10;
			}
		}
		
		if (i % cur == 0) cnt++;
	}
	printf("%d", cnt);
}