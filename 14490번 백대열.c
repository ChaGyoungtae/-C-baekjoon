#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define min(a,b)  (((a) < (b)) ? (a) : (b))

int main(void) {
	char s[18];
	scanf("%s", s);
	
	char* a = strtok(s, ":");
	char* b = strtok(NULL, "\n");

	int n, m;
	n = atoi(a);
	m = atoi(b);

	int Min = min(m, n);
	while (1) {
		if (Min == 1 || m == 1 || n == 1) break;

		else if (m % Min == 0 && n % Min == 0) {
			m /= Min;
			n /= Min;
			Min = min(m, n);
		}
		Min--;
	}
	printf("%d:%d", n, m);
}