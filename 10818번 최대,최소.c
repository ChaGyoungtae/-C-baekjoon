#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n;
	scanf("%d", &n);
	int max;
	int min;
	int* s = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
		if (i == 0) {
			max = s[i];
			min = s[i];
		}
		else {
			if (max <= s[i]) max = s[i];
			if (min >= s[i]) min = s[i];
		}
	}
	printf("%d %d", min, max);

	free(s);

}