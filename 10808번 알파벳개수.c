#include <stdio.h>

int main(void) {
	int s[27] = { 0, };
	char a[101];
	scanf("%s", a);
	for (int i = 0; a[i] != NULL; i++) {
		s[a[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", s[i]);
	}
}