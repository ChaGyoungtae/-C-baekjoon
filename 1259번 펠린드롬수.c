#include <stdio.h>
#include <string.h>

int main() {
	char s[100000];

	while (1) {
		scanf("%s", s);
		if (s[0] == '0') break;
		for (int i = 0; i <= (strlen(s)-1)/2; i++) {
			if (s[i] == s[strlen(s) - 1 - i]) {
				if (i == (strlen(s) - 1) / 2) {
					printf("yes\n");
					break;
				}
				continue;
			}
			else {
				printf("no\n");
				break;
			}
		}
	}
}