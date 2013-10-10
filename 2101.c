#include <stdio.h>

int main() {
	int a, b;
	while (EOF != scanf("%d%d", &a, &b))
		printf("%s\n", (a + b) % 86 ? "no" : "yes");
	return 0;
}

