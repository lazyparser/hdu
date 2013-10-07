#include <stdio.h>
int main() {
	int n, gpa, hasUnknown;
	char c;
	n = gpa = 0;
	hasUnknown = 0;
	while (EOF != scanf("%c", &c)) {
		switch (c) {
			case 'A':
			case 'B':
			case 'C':
			case 'D':
				gpa += 4 - c + 'A';
				/* FALLTHROUGH */
			case 'F':
				++n;
				break;
			case EOF:
			case '\n':
				if (hasUnknown)
					printf("Unknown letter grade in input\n");
				else if (n)
					printf("%.2lf\n", (double) gpa / n);
				hasUnknown = 0;
				n = gpa = 0;
				break;
			case ' ':
				break;
			default:
				hasUnknown = 1;
		}
		if (EOF == c)
			break;
	}
	return 0;
}

