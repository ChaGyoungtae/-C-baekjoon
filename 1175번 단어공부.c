#include <stdio.h>
#include <ctype.h>

typedef struct {
	int idx;
	int data;
}Max;

int main(void) {
	Max m = { 0,0 };
	char s[1000000];
	scanf("%s", s);

	int array[26] = { 0, };
	int j = 0;

	for (int i = 0; s[i] != NULL; i++) {
		s[i] = toupper(s[i]);
		array[s[i] - 65]++;
	}

	for (int i = 0; i < 26; i++) {
		if ( m.data < array[i]) {
			m.data = array[i];
			m.idx = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (i != m.idx) {
			if (array[i] == m.data) {
				printf("?");
				return 0;
			}
		}
	}
	printf("%c", m.idx + 65);

	return 0;
}