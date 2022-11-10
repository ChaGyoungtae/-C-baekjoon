#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	double max;
	double res = 0;
	scanf("%d", &n);
	double* s = (double*)malloc(sizeof(double) * n);
	for (int i = 0; i < n; i++) {
		scanf("%lf",&s[i]);
		if (i == 0) max = s[0];
		else {
			if (max < s[i]) max = s[i];
		}
	}
	for (int i = 0; i < n; i++) {
		s[i] = s[i] / max * 100;
		res += s[i];
	}
	printf("%f", res/n);
}