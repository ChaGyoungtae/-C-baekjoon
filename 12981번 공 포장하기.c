#include <stdio.h>

int main(void) {
	int r, g, b;
	scanf("%d %d %d", &r, &g, &b);
	int cnt = 0;
	cnt += (r + g + b) / 3;
	r = r % 3;
	g = g % 3;
	b = b % 3;
	
	if !(r == g && g == b) cnt++;

	printf("%d", cnt);
	
	
}