#include <stdio.h>

int main(void) {
	int a, b, c;
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		if (a > b) c = b;
		else c = a;
		int n = 1, m = 1;

		int i = 2;
		while (1) {
			if (a % i == 0 && b % i == 0) {
				a /= i;
				b /= i;
				n *= i;
			}
			else {
				i++;
				if (i > a || i > b) break;
			}
		}
		printf("%d %d", n*a*b, n);
	}


	

}