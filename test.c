#include <stdio.h>
#include <math.h>
int main () {
	int soKhoi;
	float sum1;
	float sum2;
	float sum3;
	float sum4 ;
	printf("moi nhap vao so khoi nuoc nha ban dung");
	scanf("%d", &soKhoi);
	if ( soKhoi < 10 ) {
		sum1 = soKhoi*5937;
		printf("so tien phai tra la : %.1f ", sum1);
	} else if ( soKhoi < 20 ) {
		sum2 = soKhoi*7052;
		printf("so tien phai tra la : %.1f ", sum2);
	} else if ( soKhoi < 30 ) {
		sum3 = soKhoi*8669;
		printf("so tien phai tra la : %.1f ", sum3);
	} else  {
		sum4 = soKhoi*15925;
		printf("so tien phai tra la : %.1f ", sum4);
	
}
}
