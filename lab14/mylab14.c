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
	printf("%d", a[y][x]);
	int b = 0; // 0 - заполнение нижней половины, 1 - верхней
	int c = 0; // 0 - вверх; 1 - вправо.
	int k = 1; // сколько всего прошли змейкой
	int target = n * n;
	while (k < n * n) {
		if (b == 0) {
			if (c == 0) {
				y--;
				printf("%d ", a[y][x]);
			}
		}
		k++;
	}
}
