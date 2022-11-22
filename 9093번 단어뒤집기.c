#include <stdio.h>
#include <string.h>
int main(void) {
	int n;
	scanf("%d", &n);
	getchar( );
	char s[1001];
	
	for (int i = 0; i < n; i++) {
		scanf("%[^\n]s", s);
		getchar();
		char* tmp = strtok(s, " ");
		while (tmp != NULL) {
			for (int j = strlen(tmp) - 1; j >= 0; j--) {
				printf("%c", tmp[j]);
			}
			printf(" ");
			tmp = strtok(NULL, " ");
		}
		printf("\n");
	}

}