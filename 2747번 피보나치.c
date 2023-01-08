#include <stdio.h>
int main(void){
    int dp[46];
    dp[0] = 0;
    dp[1] = 1;
    int n;
    scanf("%d",&n);
    for(int i =2; i<=n; i++){
        dp[i] = dp[i-2] + dp[i-1];
    }
    printf("%d",dp[n]);
}