#include <stdio.h>
#include <string.h>
int main(void) {
	char s[101];
	scanf("%s", s);
	printf("%c", s[0]);
	for (int i = 1; i < strlen(s); i++) {
		if (s[i - 1] == '-') {
			printf("%c", s[i]);
		}
	}
}