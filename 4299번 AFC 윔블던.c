#include <stdio.h>

int main(void) {
	int a, b, c, d;
	scanf("%d %d", &a, &b);
	c = (a + b) / 2;
	d = (a - b) / 2;
	if (b > a) printf("-1");
	else if (c >= d) printf("%d %d", c, d);
	else if (c < d) printf("%d %d", d, c);
}