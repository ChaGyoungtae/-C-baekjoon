#include <stdio.h>

int main(void) {
	char s[16];
	scanf("%s", s);
	int array[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int t = 0;
	for (int i = 0; s[i] != NULL; i++) {
		t += array[s[i] - 65];
	}
	printf("%d", t);
}