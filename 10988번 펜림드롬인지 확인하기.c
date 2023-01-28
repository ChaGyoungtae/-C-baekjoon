#include <stdio.h>
#include <string.h>
int main(void) {
	char s[101];
	scanf("%s", s);
	int i;
	for (i = 0; i < strlen(s) / 2; i++) {
		if (s[i] != s[strlen(s)-1 - i]) {
			printf("0");
			break;
		}
	}
	if (i == strlen(s) / 2) printf("1");
}