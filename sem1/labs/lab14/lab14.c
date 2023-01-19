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
    int x = n - 1;
    int y = n - 1;
    int t1 = 0;
    int t2 = n * n;
    int up = 1;
    int right = 0;
    int diagonal = 0;
    for (int i = 1; i <=n; i++) {
        t1 += i;
    }
    int current = 0;
    while (current < t1) {
        printf("%d ", a[y][x]);
        //if (x == n - 1 || y == n - 1) {
            /*
            if (change_direction == 0) {
                change_direction = 1;
            }
            */
        if (diagonal == 0) {
            if (x == n - 1) {
                up = 1;
                right = 0;
                y--;
                diagonal = 1;
            } else if (y == n - 1) {
                up = 0;
                right = 1;
                x--;
                diagonal = 1;
            }
        } else if (diagonal == 1) {
            if (up == 1) {
                x--;
                y++;
            } else if (right == 1) {
                y--;
                x++;
            }
            if (x == n - 1 || y == n - 1){
                diagonal = 0;
            }
        }
        current++;
    }
    //printf("%d, %d\n", x, y);
    if (x < 0) {
        x++;
    }
    if (y < 0) {
        y++;
    }
    diagonal = 0;
    //printf("[%d; %d]", x, y);
    while (current < t2) {
        if (diagonal == 0) {
            if (x == 0) {
                up = 1;
                right = 0;
                y--;
                diagonal = 1;
            } else if (y == 0) {
                up = 0;
                right = 1;
                x--;
                diagonal = 1;
            }
        } else if (diagonal == 1) {
            if (up == 1) {
                x++;
                y--;
            } else if (right == 1) {
                y++;
                x--;
            }
            if (x == 0 || y == 0){
                diagonal = 0;
            }
        }
        current++;
        printf("%d ", a[y][x]);
    }
    printf("\n");
}
