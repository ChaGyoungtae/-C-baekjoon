#include <stdio.h>
#define max(a,b)  (((a) > (b)) ? (a) : (b))
int main() {
	int a, b, c;
	int max;
	int s[7] = { 0, };
	scanf("%d %d %d",&a, &b, &c);
	max = max(a, b);
	max = max(max, c);
	s[a]++;
	s[b]++;
	s[c]++;
	int p = 0;
	for (int i = 1; i < 7; i++) {
		if (s[i] == 3) {
			p = 10000 + i * 1000;
			break;
		}
		else if (s[i] == 2) {
			p = 1000 + i * 100;
			break;
		}
		else {
			if (i == 6) {
				p = max * 100;
			}
		}
	}
	printf("%d", p);
}