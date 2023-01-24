#include <stdio.h>
long long gcd(long long a, long long b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}

}
int main(void) {
	int t;
	scanf("%d", &t);
	int a, b;
	int g;
	for (int i = 0; i < t; i++) {
		scanf("%lld %lld", &a, &b);
		if (a >= b) g=gcd(a, b);
		else g=gcd(b, a);
		printf("%lld\n", a*b/g);
	}
}