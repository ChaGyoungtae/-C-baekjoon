#include <stdio.h>

int main(void) {
	int tmp;
	int a[7];
	int sum = 0;
	int min;
	int j = 0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &tmp);
		if (tmp % 2 != 0) {
			a[j] = tmp;
			if (j == 0) min = a[j];
			else if(a[j] < min) {
				min = a[j];
			}
			sum += a[j];
			j++;
		}
	}
	if (j == 0) printf("-1");
	else printf("%d\n%d", sum, min);
}