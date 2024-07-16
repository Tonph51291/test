#include <stdio.h>
void thayDoiGiaTri (int *a, int *b) {
	*a *= 10;
	*b *= 10;
}
void main () {
	int a = 10 ,  b = 50;
	printf("%d %d\n", a, b);
	thayDoiGiaTri(&a, &b);
	printf("%d %d",a ,b);
}
