#include <stdio.h>
int main() {
	int n, m, i, j;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &m);
		for (i = 0; i < m * 3; i++) {
			for (j = 0; j < m; j++)
				printf("HDU");
			printf("\n");
		}
	}
	return 0;
}

