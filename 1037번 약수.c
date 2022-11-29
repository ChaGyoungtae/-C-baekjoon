#include <stdio.h>
 
int main(void) {
	int n;
	scanf("%d", &n);
	int s[51];
	int max, min;
	int a;
	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
		if (i == 0) {
			max = s[i];
			min = s[i];
		}
		else {
			if (max < s[i]) max = s[i];

			if (min > s[i]) min = s[i];
		}
	}
	a = max * min;
	printf("%d", a);
}