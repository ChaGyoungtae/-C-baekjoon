#include <stdio.h>

long long dp[117];
int domino(int n) {
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 3];
	}
	printf("%d", dp[n]);
}
int main(void) {
	int n;
	scanf("%d", &n);
	domino(n);
	
}