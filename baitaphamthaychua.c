#include <stdio.h>
int timSoLonNhat (int a, int b, int c) {
	int max;
	// xu ly code
	max = 0;
	if (b > max ) {
		max = b;
	}
	if (c > max) {
		max = c ;
	}
	return max;
}
void main () {
	int kq = timSoLonNhat(1, 2, 3);
	printf("%d", kq);
}
