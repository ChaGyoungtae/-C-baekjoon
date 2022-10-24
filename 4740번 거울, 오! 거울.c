#include <stdio.h>
#include <string.h>

int main(void) {
	char s[81];
	char *c = "***";
	gets(s);
	while (strcmp(s, c) != 0) {

		for (int i = strlen(s) - 1; i >= 0; i--) {
			printf("%c", s[i]);
		}
		printf("\n");
		gets(s);
	}
	return 0;
}