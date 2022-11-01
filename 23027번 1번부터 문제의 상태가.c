#include <stdio.h>

int main(void) {
	char a[3] = { 0, };

	char s[1001];
	scanf("%s", s);

	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] == 'A') a[0]++;
		else if (s[i] == 'B') a[1]++;
		else if (s[i] == 'C') a[2]++;
	}
	if (a[0] > 0) {
		for (int i = 0; s[i] != NULL; i++) {
			if (s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'F') s[i] = 'A';
		}
	}
	else if (a[1] > 0) {
		for (int i = 0; s[i] != NULL; i++) {
			if (s[i] == 'C' || s[i] == 'D' || s[i] == 'F') s[i] = 'B';
		}
	}
	else if (a[2] > 0) {
		for (int i = 0; s[i] != NULL; i++) {
			if (s[i] == 'D' || s[i] == 'F') s[i] = 'C';
		}
	}
	else {
		for (int i = 0; s[i] != NULL; i++) {
			s[i] = 'A';
		}
	}

	printf("%s", s);
}