#include <stdio.h>

int main() {
	int i = 0;
	double x = 1.0f, e = 1.0f;
	printf("n e\n- -----------\n");
	printf("%d %.0lf\n", i, e);
	for (i = 1; i < 10; i++) {
		x *= i;
		e += 1/x;
		if (i == 1)
			printf("%d %.0lf\n", i, e);
		else if (i == 2)
			printf("%d %.1lf\n", i, e);
		else
			printf("%d %.9lf\n", i, e);
	}
	return 0;
}

