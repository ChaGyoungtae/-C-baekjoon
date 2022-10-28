#include <stdio.h>

int main(void) {
	int i, j = 0;
	int d = 1;
	int t;
	scanf("%d", &t);
	for (int k = 0; k < t; k++) {
		scanf("%d %d", &i, &j);
		if (i < 1 || j < 1) return 0;
		for (int a = 0; a < j; a++) {
			d = d * i;
			d = d % 10;
		}
		if (d == 0) printf("10\n");
		else {
			printf("%d\n", d);
		}
	
		d = 1;
	}
}