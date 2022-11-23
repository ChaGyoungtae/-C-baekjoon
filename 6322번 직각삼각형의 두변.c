#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
	char n;
	int i = 1;
	while (1) {

		scanf("%f %f %f", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) break;
		else if (a == -1) {
			a = c * c - b * b;
			n = 'a';
			printf("Triangle #%d\n", i++);
			if (a < 0) {
				printf("Impossible.\n\n");
			}
			else {
				a = sqrt(a);
				printf("%c = %.3f\n\n", n, a);
			}
		}
		else if (b == -1) {
			b = c * c - a * a;
			n = 'b';
			printf("Triangle #%d\n", i++);
			if (b < 0) {
				printf("Impossible.\n\n");
			}
			else {
				b = sqrt(b);
				printf("%c = %.3f\n\n", n, b);
			}
		}
		else if (c == -1) {
			c = sqrt(a * a + b * b);
			n = 'c';
			printf("Triangle #%d\n", i++);
			printf("%c = %.3f\n\n", n, c);
		}
	}
	
}