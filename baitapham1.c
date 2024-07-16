#include <stdio.h>
int timSoLonNhat (int a, int b, int c) {
		if ( a > b && a > c) {
			return a;
		} else if ( b > a && b > c) {
			return b;
		} else {
			return c ;
		}
}
int main () {
	printf("%d", timSoLonNhat(1, 2, 3));
	return 0;
}
