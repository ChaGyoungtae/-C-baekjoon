#include <stdio.h>

int main(void) {
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	int i = 1;
	int min;
	int sum = 0;
	int cnt = 0;
	while (1) {
		int tmp;
		tmp = i * i;
		if (tmp >= n && tmp <= m) {
			if (cnt == 0) {
				min = tmp;
				cnt++;
			}
			sum += tmp;
		}
		else if (tmp > m) break;
		i++;
	}
	if (sum == 0) printf("-1");
	else {
		printf("%d\n%d", sum,min);	
	}
}