/*
#include <stdio.h>

int main() {
	char c;
	while (c != EOF) {
		c = getchar();
		int d = c;
		int e = d;
		if (c >= 'a' && c <= 'z') {
			d -= 'a';
			d += 4;
			int f = c + d;
			if (f > 'z') {
				e += d;
				e = e % 26;
			} else {
				e = d;
			}
			c += e;
		} else if (c >= 'A' && c <= 'Z') {
			d -= 'A';
			//printf("%d\n", d);
			d += 4;
			int f = c + d;
			if (f > 'Z') {
				e += d;
				e = e % 26;
			} else {
				e = d;
			}	
			//printf("%d\n", d);
			c += e;
		}
		printf("%c\n", c);
	}
}
*/

#include <stdio.h>

int transit(char c, char c1) {
	int no, key, target;
	no = c - c1;
	no++;
	key = no + 3;
	target = (key + no) % 26;
	target += c1 - 1;
	return target;
}

int main() {
	char c;
	while (c != EOF) {
		c = getchar();
		if (c >= 'A' && c <= 'Z') {
			c = transit(c, 'A');
		} else if (c >= 'a' && c <= 'z') {
			c = transit(c, 'a');
		}
		printf("%c", c);
	}
	printf("\n");
}
