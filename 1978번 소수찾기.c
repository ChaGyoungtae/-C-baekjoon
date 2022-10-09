#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int cnt = 0;
	int c;
	int s[100] = { 0, };
	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
		if (s[i] > 1000 || s[i] < 0) return 0;
	}

	for (int i = 0; i < n; i++) {
		c = 2;
		if (s[i] == 1) {
			continue;
		}
		for (int j = 2; j <= s[i]; j++) {
			if (s[i] % j == 0) break;
			c++;
			if (c == s[i]) cnt++;
		}

	}
	printf("%d", cnt);
}