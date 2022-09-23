#include <stdio.h>
#include <string.h>

int main(void) {
	char p[1000000];
	
	gets(p);

	char *s = strtok(p, " ");
	int cnt = 0;
	while (s != NULL) {
		s = strtok(NULL, " ");
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}