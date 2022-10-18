#include <stdio.h>
int main(void) {
	int h, m;
	scanf("%d %d", &h, &m);
	int c;
	scanf("%d", &c);
	h += c / 60;
	m += c % 60;
	if (m >= 60) {
		h += m / 60;
		m = m % 60;
	}
	if (h >= 24) {
		h = 24 - h;
	}

	printf("%d %d", h, m);
}