#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int a = 1;
	while (1) {
		if (a > n) {
			printf("0");
			break;
		}
		else if (a == n) {
			printf("1");
			break;
		}
		else a *= 2;
	}
}