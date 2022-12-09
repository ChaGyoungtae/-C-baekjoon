#include <stdio.h>
#define MAX_sack_SIZE 5001
long long sugar_dp[4][MAX_sack_SIZE];

void init_sugar(long long arr[][MAX_sack_SIZE]) {

	for (int i = 0; i < MAX_sack_SIZE; i++)
		arr[0][i] = i;

	for (int i = 0; i < 4; i++)
		arr[i][0] = 0;

	for (int i = 1; i < MAX_sack_SIZE; i++)
		arr[3][i] = 9999;


}
int d[3] = {0, 3, 5};
int minSugar(int n) {


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2; j++) {
			
			if (d[j] <= sugar_dp[0][i] && sugar_dp[3][i - (d[j])] + 1 < sugar_dp[3][i]) {

				sugar_dp[3][i] = sugar_dp[3][i - (d[j])] + 1; //최적해

				sugar_dp[2][i] = sugar_dp[2][i - (d[j])]; //5
				sugar_dp[1][i] = sugar_dp[1][i - (d[j])]; //3
				sugar_dp[j][i]++; //j번째 우표 액면가 증가

			}

		}

	}



	if (sugar_dp[3][n] != 9999) 	printf("%lld", sugar_dp[3][n]);
	else printf("-1");

}
int main(void) {
	int n;
	scanf("%d", &n);
	init_sugar(sugar_dp);
	minSugar(n);



}