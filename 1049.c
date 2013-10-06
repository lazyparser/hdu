#include <stdio.h>

int main() {
	int n, d, u, t;
	while (1) {
		scanf("%d%d%d", &n, &u, &d);
		if (!n) break;
		t = (n - u) / (u - d);
		if (t * (u - d) + u < n)
			++t;
		printf("%d\n", t + t + 1);
	}
	return 0;
}

