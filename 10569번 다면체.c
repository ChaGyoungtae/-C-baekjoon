#include <stdio.h>

int main(void) {
	int t, v, e;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &v, &e);
		printf("%d", 2 - v + e);
	}
}