#include <stdio.h>

int main() {
	int s[4];
	int min1;
	int a[3];
	int min2;
	for (int i = 0; i < 3;i++) {
		scanf("%d", &s[i]);
		if (i == 0) min1 = s[i];
		else {
			if (s[i] < min1) min1 = s[i];
		}
	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &a[i]);
		if (i == 0) min2 = a[i];
		else {
			if (a[i] < min2) min2 = a[i];
		}
	}
	printf("%d %d\n", min1, min2);
	int res = min1 + min2 - 50;
	printf("%d", res);
}