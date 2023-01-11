#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void) {
	int t;
	char s[10001];
	int size;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%s", s);
		size = sqrt(strlen(s));
		char** arr = (char**)malloc(sizeof(char*) * size);
		for (int i = 0; i < size; i++) {
			arr[i] = (char*)malloc(sizeof(char) * size);
		}
		int cnt = 0;
		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				arr[j][k] = s[cnt];
				cnt++;
			}
		}
		for (int j = size-1; j >= 0; j--) {
			for (int k = 0; k <size; k++) {
				printf("%c",arr[k][j]);
			}
		}
		printf("\n");
	}
}