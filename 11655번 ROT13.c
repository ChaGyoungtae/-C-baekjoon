#include <stdio.h>
#include <string.h>
int main() {
	char s[102];
	scanf("%[^\n]s",s);

	
	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] >= 'A' && s[i] < 'Z') {
			if (s[i] > 'M') {
				s[i] = s[i] - 13;
			}
			else {
				s[i] = s[i] + 13;
			}
		}
		else if (s[i] >= 'a' && s[i] <= 'z') {
			if (s[i] > 'm') {
				s[i] = s[i] - 13;
			}
			else {
				s[i] = s[i] + 13;
			}
		}
	}
	printf("%s", s);
	return 0;
}