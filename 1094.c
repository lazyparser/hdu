#include <stdio.h>

int main() {
	int n, v, sum;
	while (EOF != scanf("%d", &n)) {
		sum = 0;
		while (n--) {
			scanf("%d", &v);
			sum += v;
		}
		printf("%d\n", sum);
	}
	return 0;
}

