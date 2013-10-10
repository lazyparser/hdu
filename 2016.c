#include <stdio.h>

int main() {
	int n, v[128], min, tmp, i;
	scanf("%d", &n);
	while (n) {
		for (i = 0; i < n; i++)
			scanf("%d", v + i);

		min = 0;
		for (i = 1; i < n; i++)
			if (v[min] > v[i])
				min = i;

		tmp = v[min];
		v[min] = v[0];
		v[0] = tmp;

		printf("%d", v[0]);
		for (i = 1; i < n; i++)
			printf(" %d", v[i]);
		printf("\n");
		scanf("%d", &n);
	}
	return 0;
}

