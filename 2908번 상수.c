#include <stdio.h>
#include <math.h>

int main(void) {
	char a[4];
	char b[4];
	scanf("%s %s", a, b);
	int ia = 0;
	int ib = 0;
	for (int i = 2; i >= 0; i--) {
		ia += (a[i] - 48) * pow(10, i);
		ib += (b[i] - 48) * pow(10, i);;
	}
	int m = ia > ib ? ia : ib;
	printf("%d", m);
	return 0;
}