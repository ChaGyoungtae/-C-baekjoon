#include <stdio.h>
int main(void) {
	char s[100];
	scanf("%s",s);
	int j;
	for (int i = 0; i < 26; i++) {
		j = 0;
		while (s[j] != NULL) {
			if (s[j] - 97 == i) {
				printf("%d ", j);
				break;
			}
			else {
				j++;
				if (s[j] == NULL) {
					printf("%d ",-1);
				}
			}
		}
	}
}