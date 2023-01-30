#include <stdio.h>
int main(void) {
	int s[9][9];
	int a = 0;
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			scanf("%d", &s[i][j]);
		}
	}
	a = s[0][0];
	int x, y;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (s[i][j] >= a) {
				a = s[i][j];
				x = i;
				y = j;
			}
		}
	}
	printf("%d\n%d %d", a, x + 1, y + 1);
}