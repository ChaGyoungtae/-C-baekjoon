#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a = 0;
	for (int i = 1; ; i++) {
		if (i % 2 != 0) {
			if (n - i < 0) {
				a = i-n;

			}
		}
		else {
			if (n - i < 0) {
				break;
			}
		}
		n -= i;
	}
	printf("%d", a);
}