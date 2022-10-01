#include <stdio.h>

int main(void) {
	int n;
	int cnt = 0;
	scanf("%d", &n);
	if (n < 1 || n > 10000000) return 0;
	int i = 1, j = 1;
	int a = 1, b = 1;
	while (cnt < n) {
		for (j = 1; j <= i; j++) {
			if (i == 1) {
				cnt++;
				break;
			}
			if (i % 2 != 0) {
				if (j == 1) {
					a++;
			}
				else {
					a--;
					b++;
				}
			}
			else {
				if (j == 1) {
					b++;
				}
				else {
					a++;
					b--;
				}
			}
			cnt++;
			if (cnt == n) {
				break;
			}
		}
		i++;
	}
	printf("%d/%d\n", a, b);

}