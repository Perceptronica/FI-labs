#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n >= 0) {
        printf("%d\n", n);
    } else if (n < 0) {
        printf("%d\n", INT_MAX + n + 1);
    }
}
