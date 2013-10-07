#include <stdio.h>
int main() {
	int n, i, d, f1, f2, total;
	scanf("%d", &n);
	while (n) {
		f1 = total = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &f2);
			d = f2 - f1;
			if (d > 0)
				total += 6 * d;
			else
				total -= 4 * d;
			total += 5;
			f1 = f2;
		}
		printf("%d\n", total);
		scanf("%d", &n);
	}
	return 0;
}

