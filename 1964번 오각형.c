#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n;
	scanf("%d", &n);
	int* dp = (int*)malloc(sizeof(int) * n);
	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		dp[i] = (dp[i - 1] + 3 * i + 1) % 45678;
	}
	printf("%lld", dp[n]);
	
}