#include <stdio.h>
int main(void) {
	double n, b, m;
	int i = 0;
	while (scanf("%lf %lf %lf",&n,&b,&m) != EOF) {
		while (1) {
			n += n * b / 100;
			i++;
			if (n > m) {
				printf("%d\n", i);
				i = 0;
				break;
			}
		}
	}
}