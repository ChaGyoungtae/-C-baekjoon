#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	char s[800008];
	scanf("%s", s);
	int i = 0;
	int cnt1 = 0;
	int cnt2 = 0;
	while (1) {
		if (s[i] == 'b') cnt1++;
		else if (s[i] == 's') cnt2++;

		if (cnt1 + cnt2 == n) break;
		i++;
	}

	if (cnt1 > cnt2) printf("bigdata?");
	else if (cnt2 > cnt1) printf("security!");
	else printf("bigdata? security!");
}