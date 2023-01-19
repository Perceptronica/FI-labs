#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int s;
    for (int i = 0; i < n; i++) {
        s = a[i][i];
        int j = i - 1;
        int k = i + 1;
        while (j >= 0 && k < n) {
            s += a[j][k];
            j--;
            k++;
        }
        j = i + 1;
        k = i - 1;
        while (j < n && k >= 0) {
            s += a[j][k];
            j++;
            k--;
        }
        a[i][i] = s;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
