#include <stdio.h>
int main(void) {
	int a, b;
	int res = 0;
	int cnt = 0;
	int i = 1;
	scanf("%d %d", &a, &b);
	while (i < 15) {
		if (cnt == b) break;
		for (int j = 1; j <= i; j++) {
			if (a <= cnt+1) res += i;
			cnt++;
			if (cnt == b) break;
		}
		i++;
	}
	printf("%d", res);
}