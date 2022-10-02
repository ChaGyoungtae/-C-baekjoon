#include <stdio.h>

int main(void) {
	int a, b, v;

	scanf("%d %d %d", &a, &b, &v);
	v -= a;
	int h = a - b;
	int day = 1;

	if (v <= 0) printf("%d", day);
	else {
		if (v % h == 0) {
			day = v / h + day;
			printf("%d", day);
		}
		else {
			day = v / h + day + 1;
			printf("%d", day);
		}
	}
}