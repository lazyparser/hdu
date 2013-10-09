#include <stdio.h>
#include <stdlib.h>

int num[20000];
int cmp(const void* l, const void* r) {
	int vl = *(const int*)l;
	int vr = *(const int*)r;
	return vl == vr ? 0 :
		vl < vr ? -1 : 1;
}

int main() {
	int n, m, i;
	while (EOF != scanf("%d%d", &n, &m)) {
		for (i = 0; i < n + m; i++)
			scanf("%d", num + i);
		qsort(num, n + m, sizeof(int), cmp);
		printf("%d", num[0]);
		for (i = 1; i < n + m; i++)
			if (num[i] != num[i-1])
				printf(" %d", num[i]);
		printf("\n");
	}
	return 0;
}

