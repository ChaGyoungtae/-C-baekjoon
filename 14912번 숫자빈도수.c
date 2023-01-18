#include <stdio.h>
#include <string.h>
int main(void) {
	char s[7];
	int n;
	char a;
	int cnt = 0;
	scanf("%d %c", &n, &a);

	for (int i = 1; i <= n; i++) {
		sprintf(s, "%d", i);
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] == a) cnt++;
		}
	}
	printf("%d\n", cnt);
	
}