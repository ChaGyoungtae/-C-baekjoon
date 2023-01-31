#include <stdio.h>
#include <string.h>
int func(int a, int b) {
	char s[8];
	int cnt = 0;
	for (int i = a; i <= b; i++) {
		sprintf(s,"%d", i);
		for (int j = 0; j < strlen(s); j++) {
			if (s[j] == '0') cnt++;
		}
	}
	return cnt;
}
int main(void) {
	int t;
	scanf("%d", &t);
	int a, b;
	int cnt;
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		cnt = func(a, b);
		printf("%d\n", cnt);
	}
}