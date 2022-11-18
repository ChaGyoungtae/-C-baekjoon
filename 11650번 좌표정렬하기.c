#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int xpos;
	int ypos;
}pos;
int compare(const void *a, const void *b) {
	pos A = *(pos*)a;
	pos B = *(pos*)b;

	if (A.xpos > B.xpos) {
		return 1;
	}
	else if (A.xpos < B.xpos) {
		return -1;
	}
	else {
		if (A.ypos > B.ypos) {
			return 1;
		}
		else {
			return 0;
		}
	}
}
int main(void) {
	int n;
	scanf("%d", &n);
	pos *a = (pos*)malloc(sizeof(pos) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a[i].xpos, &a[i].ypos);
	}
	qsort(a, n, sizeof(pos), compare);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", a[i].xpos, a[i].ypos);
	}

	free(a);
	return 0;
}