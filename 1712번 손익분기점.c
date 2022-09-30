#include <stdio.h>

int main(void) {
	int  a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (c - b == 0) { 
		printf("-1");
		return 0; 
	}
	int i = a / (c-b) + 1;
	if (i <= 0) {
		printf("-1");
	}
	else {
		printf("%d", i);
	}

	return 0;
}