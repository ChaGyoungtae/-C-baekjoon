#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	int tmp;
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		if (tmp == 1) cnt1++;
		else if (tmp == 0) cnt2++;
	}
	if (cnt1 > cnt2) printf("Junhee is cute!");
	else printf("junhee is not cute!");
}