#include <stdio.h>
#include <stdlib.h>
int compare(const void* first, const void* second) {
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
int main(void) {
	int n, l, h;
	double sum = 0;

	scanf("%d %d %d", &n, &l, &h);
	int* s = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
	}
	qsort(s, n, sizeof(int), compare);
	for (int i = l; i < n-h; i++) {
		sum += s[i];
	}
	sum = sum / (n-l-h);
	printf("%.9f", sum);

}