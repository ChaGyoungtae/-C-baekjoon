#include <stdio.h>

int main() {
	int x, y, w, h;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	int min = x;
	int s[4] = { x,y,w - x,h - y };
	for (int i = 0; i < 4; i++) {
		if (min >= s[i]) min = s[i];
	}
	
	printf("%d", min);
}