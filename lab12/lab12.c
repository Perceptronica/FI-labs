#include <stdio.h>

int main() {
	int k, n;
	scanf("%d", k);
	n = k;
	int ans = 1;
	int p = 1;
	while (n > 0) {
		int a_i = n % 10;
		ans += (10 - 1 - a_i) * p;
		p *= 10;
		n /= 10;
	}
	printf("%d", ans);
}
