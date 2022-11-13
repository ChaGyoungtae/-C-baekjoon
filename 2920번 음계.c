#include <stdio.h>
int main() {
	int a[9];
	for (int i = 0; i < 8; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 7; i++) {
		if (a[0] == 1) {
			if (a[i] != a[i + 1] - 1) break;
			else if (i == 6) {
				printf("ascending");
				return 0;
			}
		}
		if (a[0] == 8) {
			if (a[i] != a[i + 1] + 1) break;
			else if (i == 6) {
				printf("descending");
				return 0;
			}
		}
	}
		printf("mixed");
}