#include <stdio.h>
#include <string.h>
int main() {
	int a[27] = { 0, };
	char s[251];
	int cnt = 0;
	while (1) {
		gets(s);
		if (s[0] == '#') break;
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] >= 97 && s[i] <= 122) {
				s[i] = toupper(s[i]);
			}
		}
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] >= 65 && s[i] <= 90) {
				a[s[i] - 'A']++;
			}
		}
		for (int i = 0; i < 26; i++) {
			if (a[i] != 0) cnt++;
		}
		printf("%d\n", cnt);
		cnt = 0;
		for (int i = 0; i < 26; i++) {
			a[i] = 0;
		}
	}
	
}