#include <stdio.h>
int main(void) {
	char s[8][9] = { 0, };
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%s", s[i]);
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					if (s[i][j] == 'F') cnt++;
				}
			}
			else {
				if (j % 2 != 0) {
					if (s[i][j] == 'F') cnt++;
				}
			}
		}
	}
	printf("%d", cnt);
}