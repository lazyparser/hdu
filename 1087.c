/* HDU 1087
 * DP
 */
#include <stdio.h>
int main() {
	int v[1024], n, i, j;
	long long sum[1024], max; 
	scanf("%d", &n);
	while (n) {
		for (i = 0; i < n; i++)
			scanf("%d", v + i);
		max = 0;
		for (i = n - 1; i >= 0; --i) {
			sum[i] = 0;
			for (j = i + 1; j < n; ++j) {
				if (v[i] < v[j] && sum[i] < sum[j])
					sum[i] = sum[j];
			}
			sum[i] += v[i];
			if (max < sum[i])
				max = sum[i];
		}
		printf("%lld\n", max);
		scanf("%d", &n);
	}
	return 0;
}

