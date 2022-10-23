#include <stdio.h>

int main() {
	char s[5];
	scanf("%s", s);

	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			if (s[i] == 'E') s[i] = 'I';
			else s[i] = 'E';
		}
		else if (i == 1) {
			if (s[i] == 'N') s[i] = 'S';
			else s[i] = 'N';
		}
		else if (i == 2) {
			if (s[i] == 'F') s[i] = 'T';
			else s[i] = 'F';
		}
		else if(i==3) {
			if (s[i] == 'P') s[i] = 'J';
			else s[i] = 'P';
		}
	}
	printf("%s",s);
}