#include <stdio.h>
#define PI 3.1415927

int main() {
	double r, v;
	while (EOF != scanf("%lf", &r))
		printf("%.3lf\n", 4 * r * r * r * PI / 3);
	return 0;
}

