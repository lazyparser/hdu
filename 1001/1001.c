#include <stdio.h>

int main() {
	int i;
	while (EOF != scanf("%d", &i))
		printf("%d\n\n", i % 2 ? i * ((i + 1)>>1) : (i>>1)*(i+1));
	return 0;
}

