#include <stdio.h>
int main(void) {
	char a[10001];
	char b[10001];
	long long res1 = 0;
	long long res2 = 0;
	scanf("%s %s", &a, &b);
	for (int i = 0; a[i] ; i++) res1 += a[i] - '0';
	for (int i = 0; b[i]; i++) res2 += b[i] - '0';
	
	printf("%lld", res1 * res2);
}