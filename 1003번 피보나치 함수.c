#include <stdio.h>
int dp[41];
int fibonacci(int n) {
	if (n == 0) {
		dp[0] = 0;
		return 0;
	}
	else if (n == 1) {
		dp[1] = 0;
		return 1;
	}
	else {
		if (dp[n] != 0) return dp[n];
		else {
			return dp[n] =  fibonacci(n - 1) + fibonacci(n - 2);
		}

	}
}
int main(void) {
	int t, c;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &c);
		fibonacci(c);
		if (c == 0) {
			printf("1 0\n");
		}
		else if (c == 1) {
			printf("0 1\n");
		}
		else {
			fibonacci(c);
			printf("%d %d", dp[c - 1], dp[c]);
		}
	}
}