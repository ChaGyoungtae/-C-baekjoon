#include <stdio.h>
int main(void) {
	int n, c;
	char s[20];
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		scanf("%d %s", &n, s);
		for (int j = 0; s[j] != NULL; j++) {
			for (int k = 0; k < n; k++) {
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
	return 0;
}