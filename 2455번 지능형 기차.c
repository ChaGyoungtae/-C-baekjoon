#include <stdio.h>

int main(void) {
	int s[4] = { 0, };
	int out, in, max;
	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &out, &in);
		
		if (i == 0) {
			s[i] = in;
			max = s[i];
		}
		else {
			s[i] = s[i - 1] - out + in;
			if (s[i] > max) max = s[i];
		}
	}
	printf("%d", max);
}