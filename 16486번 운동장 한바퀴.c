#include <stdio.h>

int main() {
	int a, b;
	double c;
	scanf("%d", &a);
	scanf("%d", &b);

	c = 2 * a + (2 * b * 3.141592);

	printf("%f", c);
}