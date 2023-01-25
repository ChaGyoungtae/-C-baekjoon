#include <stdio.h>
#include <string.h>
long long trans(char *arr) {
	long long sum = 0;
	for (int i = 0; arr[i] != NULL; i++) {
		sum += arr[i] - '0';
	}
	return sum;
}
int main(void) {
	char arr[1000001];
	scanf("%s", arr);
	int cnt = 0;
	long long sum = 0;

	while (1) {
		if (strlen(arr) == 1) {
			sum = arr[0] - '0';
		}
		else {
			sum = trans(arr);
			cnt++;
		}
		if (sum > 9) {
			sprintf(arr, "%lld", sum);
		}
		else {
			printf("%d\n", cnt);
			if (sum % 3 == 0) printf("YES");
			else printf("NO");
			break;
		}
	}
}