#include <stdio.h>
#include <string.h>

typedef struct {
	int acnt;
	int bcnt;
} info;

int main(void) {
	info s[46];
	int k;
	s[0].acnt = 1;
	s[0].bcnt = 0;

	s[1].acnt = 0;
	s[1].bcnt = 1;
	scanf("%d", &k);
	
	for (int i = 2; i <= k; i++) {
		s[i].acnt = s[i - 1].acnt + s[i - 2].acnt;
		s[i].bcnt = s[i - 1].bcnt + s[i - 2].bcnt;
	}

	printf("%d %d", s[k].acnt, s[k].bcnt);
}