#include <stdio.h>
#include <string.h>

int main(void) {
	char s[100];

	scanf("%s", s);
	int len = strlen(s);
	
	


	int tmp;

	for (int i = len - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if ((s[j]-48) < (s[j + 1]-48)) {
				tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
		}
	}
	printf("%s", s);

}