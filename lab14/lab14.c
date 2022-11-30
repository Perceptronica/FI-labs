#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	//const int m = n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int k = 1;
	int x = n / 2;
	int y = n / 2;
	if (n % 2 == 0) {
		x--;
		y--;
	}
	int target = n * n;
	int step = 1; // на сколько идем
	int c = 0; // какое направление
	int d = 0;
	int curr_step = 0;
	printf("%d ", a[y][x]);
	//char[] directions = {'d', 'r', 'u', 'l'};
	while (k < target) {
		switch (c) {
			case 0: y++; break;
			case 1: x++; break;
			case 2: y--; break;
			case 3: x--; break;
			default: printf("error!\n");
		}
		curr_step++;
		if (curr_step == step) {
			c++;
			c %= 4;
			curr_step = 0;
			d++;
			if (d % 2 == 0) {
				step++;
				d %= 2;
			}
		}
		printf("%d ", a[y][x], y, x);
		k++;
	}
}
