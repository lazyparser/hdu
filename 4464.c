#include <stdio.h>

int main() {
	int n, k, i, j, sum, max;
	char url[128];
	for (k = 1; EOF != scanf("%d", &n); k++) {
		max = 0;
		for (i = 0; i < n; i++) {
			scanf("%s", url);
			for (sum = 0, j = 0; url[j]; j++)
				sum += url[j];
			if (max < sum)
				max = sum;
		}
		printf("Case %d: %d\n", k, max);
	}
	return 0;
}

