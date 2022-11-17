#include <stdio.h>
#include <stdlib.h>

int max(int x, int y) {
	if (x <= y) {
		return y;
	} else {
		return x;
	}
}

int min(int x, int y) {
	if (x <= y) {
		return x;
	} else {
		return y;
	}
}

int modulo(int x, int y) {
	int k = 0;
	if (x < 0) {
		if (abs(x) % abs(y) == 0) {
			k = 0;
		} else {
			k = 1;
		}
	}
	return x - (x / y - k) * y;
}

int main() {
	const int i0 = 11;
	const int j0 = 13;
	const int l0 = 10;
	//printf("%d\n", modulo(23, 10));
	int i_old = i0, j_old = j0, l_old = l0;
	int i_next, j_next, l_next;
	int k = 0;
	int flag = 0;
	while (1) {
		i_next = abs(k - 15) - min(i_old / 3, modulo((j_old + l_old), 10)) - 20;
		j_next = -(j_old + k) / 5 + abs(modulo(i_old * l_old, 8));
		l_next = max(modulo(i_old + j_old, 15), modulo(l_old + k, 14));
		i_old = i_next;
		j_old = j_next;
		l_old = l_next;
		k++;
		if ((i_old > 5 && i_old < 15) && (j_old > -15 && j_old < -5)) {
			printf("it`s in! x: %d, y: %d, step: %d\n", i_old, j_old, k);
			break;
		}
		if (k == 50) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("miss!\n");
	}
	return 0;
}
