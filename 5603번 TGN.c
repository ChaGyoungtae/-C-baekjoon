#include <stdio.h>
int main(void) {
	int t;
	scanf("%d", &t);
	int r, e, c;
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &r, &e, &c);
		if (r < e - c) printf("advertise\n");
		else if (r > e - c) printf("do not advertise\n");
		else printf("does not matter\n");
	}


}
