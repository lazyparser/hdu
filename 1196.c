#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	while (a) {
		printf("%d\n", (1 + (a ^ (a - 1)))>>1);
		scanf("%d", &a);
	}
	return 0;
}

