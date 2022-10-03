#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	int h, w, n;
	int i = 1;
	int cnt;
	while (i <= t) {
		cnt = 0;
		scanf("%d %d %d", &h, &w, &n);

		for (int i = 1; i <= w; i++) {
			for (int j = 1; j <= h; j++) {
				cnt++;
				if (n == cnt) {
					printf("%d\n", j * 100 + i);
				}
			}
		}
		i++;
	}
	return 0;
}