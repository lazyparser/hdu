#include <stdio.h>

int main() {
	int n, i, v, sum;
	scanf("%d", &n);
	while (n) {
		sum = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &v);
			sum += v;
		}
		printf("%d\n", sum);
		scanf("%d", &n);
	}
	return 0;
}

