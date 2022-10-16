#include <stdio.h>

int main(void) {
	int s[3];
	int max;
	int a;
	while (1) {
		max = 0;
		scanf("%d %d %d", &s[0], &s[1], &s[2]);
		if (s[0] == 0 && s[1] == 0 && s[2] == 0) {
			break;
		}
		for (int i = 0; i < 3; i++) {
			if (max < s[i]) max = s[i];
		}
		if (max == s[0]) a = s[1] * s[1] + s[2] * s[2];
		else if (max == s[1]) a = s[0] * s[0] + s[2] * s[2];
		else if (max == s[2]) a = s[0] * s[0] + s[1] * s[1];

		if (max * max == a) printf("right\n");
		else printf("wrong\n");
	}
}