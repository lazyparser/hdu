#include <stdio.h>
#include <stdlib.h>

/* void qsort (void* base, size_t num, size_t size,
 *             int (*compar)(const void*,const void*));
 */
int compar(const void* pl, const void* pr) {
	int l = *(int*)pl, r = *(int*)pr;
	return l > r ? 1 : l == r ? 0 : -1;
}

int main() {
	int t, i, n, v[1024];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d", v + i);
		qsort(v, n, sizeof(int), compar);
		for (i = 0; i < n; i++)
			printf("%s%d", i ? " " : "", v[i]);
		printf("\n");
	}
	return 0;
}

