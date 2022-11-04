#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	char s[6];
	int res = 0;
	scanf("%s", s);
	for (int i = 0; i < 5; i++) {
		res += pow(s[i]-'0', 5);
	}
	printf("%d", res);
}