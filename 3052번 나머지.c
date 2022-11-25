#include <stdio.h>

int main(void) {
	int n;
	int s[42] = { 0, };
	int cnt = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		s[n%42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (s[i] != 0) cnt++;
	}
	printf("%d", cnt);
}