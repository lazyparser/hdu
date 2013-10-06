#include <stdio.h>

int main() {
	int n, m, i, v, sum;
	scanf("%d", &n);
	while (n--) {
		sum = 0;
		scanf("%d", &m);
		for (i = 0; i < m; i++) {
			scanf("%d", &v);
			sum += v;
		}
		printf("%d\n", sum);
		if (n)
			printf("\n");
	}
	return 0;
}

