#include <stdio.h>
int gcd(int a, int b) {
	if (a > b)
		return gcd(b, a);
	if (a == 0)
		return b;
	if (a == 1)
		return 1;
	if (b % a == 0)
		return a;
	return gcd(b % a, a);
}

int main() {
	int a, b;
	while (EOF != scanf("%d%d", &a, &b))
		printf("%d\n", a * ( b / gcd(a, b)));
	return 0;
}

