#include <stdio.h>
#include <string.h>
int main(void) {
	char s[100];
	scanf("%s", s);
	int cnt = 0;

	for (int i = 0; i<strlen(s) ; i++) {
		cnt++;
		if (s[i] == 'c') {
			if (s[i+1] == '=') {
				cnt--;
			}
			else if (s[i + 1] == '-') {
				cnt--;
			}
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == 'z') {
				if (s[i + 2] == '=') {
					cnt -= 2;
				}
			}
			else if (s[i + 1] == '-') {
				cnt--;
			}
		}
		else if (s[i] == 'l') {
			if (s[i+1] == 'j') {
				cnt--;
			}
		}
		else if (s[i] == 'n') {
			if (s[i + 1] == 'j') {
				cnt--;
			}
		}
		else if (s[i] == 's') {
			if (s[i + 1] == '=') {
				cnt--;
			}
		}
		else if (s[i] == 'z') {
			if (s[i + 1] == '=') {
				if (s[i - 1] == 'd') {
					cnt++;
				}
					cnt--;
			}
		}
	}
	printf("%d", cnt);
	
	return 0;
}