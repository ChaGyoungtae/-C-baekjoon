#include <stdio.h>
#include <string.h>
int main(void) {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int t = a * b * c;
	char n[11];
	sprintf(n, "%d", t);
	int s[10] = { 0, };
	for (int i = 0; i<strlen(n); i++) {
		s[n[i] - '0']++;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", s[i]);
	}

}