#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int sum = 1;
    for (int i = n; n >= 1; n--) {
        sum *= n;
    }
    printf("%d", sum);
}