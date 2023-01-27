#include <stdio.h>
int main(void) {
	int n;
	int a;
	scanf("%d %d", &n, &a);
	int t[6];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &t[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", t[i] - n * a);
	}
}