#include <stdio.h>

int main() {
	int n, f;
	scanf("%d", &n);
	scanf("%d", &f);
	n = n - (n % 100);
	while (1) {
		if (n % f == 0) {
			if (n % 100 < 10) printf("0%d", n % 100);
			else printf("%d", n % 100);
			break;
		}
		n++;
	}
}