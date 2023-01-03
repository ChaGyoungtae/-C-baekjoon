#include <stdio.h>
typedef struct {
    long long x;
    long long y;
}S;
int main(void) {
    int n;
    scanf("%d", &n);
    S tile[81];
    tile[1].x = 1;
    tile[1].y = 1;

    tile[2].x = 2;
    tile[2].y = 1;
    
    for (int i = 3; i <= n; i++) {
        tile[i].x = tile[i - 1].x + tile[i - 1].y;
        tile[i].y = tile[i - 2].y + tile[i - 1].y;
    }
    printf("%lld", tile[n].x * 2 + tile[n].y * 2);
}