#include <stdio.h>

int main(void) {
	int t;
	long long a, b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%lld %lld", &a, &b);
		if (a * 2 <= b && b % a == 0) printf("1\n");
		else printf("0\n");
	}

}