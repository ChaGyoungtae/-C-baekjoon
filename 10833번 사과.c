#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int student;
	int apple;
	int res;
} School;

int main(void) {
	int n;
	int sum = 0;
	scanf("%d", &n);
	School* s = (School*)malloc(sizeof(School) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &s[i].student, &s[i].apple);
		s[i].res = 0;
		s[i].res = s[i].apple % s[i].student;
		sum += s[i].res;
	}
	printf("%d", sum);
}