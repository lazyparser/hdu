#include <stdio.h>

int main () {
	int a, b, i, tmp, d;
	while (EOF != scanf("%d%d", &a, &b)) {
		tmp = a % 10;
		d = 1;
		while (b) {
			if (b & 1)
				d = (d * tmp) % 10;
			tmp = (tmp * tmp) % 10;
			b >>= 1;
		}
		printf("%d\n", d);
	}
	return 0;
}

