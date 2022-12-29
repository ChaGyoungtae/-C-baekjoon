#include <stdio.h>
#include <string.h>
int main(void) {
	char s[100];
	int j = 0;
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) {
		printf("%c", s[i]);
		j++;
		if (j % 10 == 0) printf("\n");
	}
}