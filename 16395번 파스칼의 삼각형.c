#include <stdio.h>
#define MAX_sack_SIZE 30
int dp[MAX_sack_SIZE][MAX_sack_SIZE];

int pascal() {

}
int main(void) {
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i+1; j++) {
			if (j == 0) dp[i][j] = 1;
			else if (j == i) dp[i][j] = 1;
			else {
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%2d ", dp[i][j]);
		}
		printf("\n");
	}

	printf("%d", dp[n - 1][k - 1]);


}