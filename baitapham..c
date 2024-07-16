#include <stdio.h>

int timSoLonNhat ( int a, int b, int c) {
	int max;
	max = a;
	if (b > max) {
		max = b;
	}
	if ( c > max) {
		max = c ;
	}
	
}
int main () {
	int kq = timSoLonNhat(1, 2, 3);
	printf("%d", kq);
}
