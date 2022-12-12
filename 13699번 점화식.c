#include <stdio.h>

int main(void) {
	long long arr[36] = { 0, };
	int i, j;
	int n;
	scanf("%d", &n);
	arr[0] = 1;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < i; j++) {
			arr[i] += arr[j] * arr[i - j - 1];
		}
	}

	printf("%lld ", arr[n]);
}