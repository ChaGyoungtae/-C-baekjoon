#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n;
	int a = 0;
	int b = 0;
	scanf("%d", &n);
	char v[15] = { 0, };
	scanf("%s", v);
	for (int i = 0; i < n; i++) {
		if (v[i] == 'A') a++;
		else if (v[i] == 'B') b++;
	}
	if (a > b) printf("A");
	else if (b > a) printf("B");
	else printf("Tie");
}