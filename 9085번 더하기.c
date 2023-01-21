#include <stdio.h>
int main(void) {
	int t;
	int n;
	int a;
	int b = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &a);
			b += a;
		}
		printf("%d\n", b);
		b = 0;
	}

}