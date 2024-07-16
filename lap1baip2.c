#include <stdio.h>
#include <math.h>
int main () {
	int a,b,canhHuyen;
	printf("nhap canh do dai canh a : ");
	scanf("%d",  &a );
	printf("nhap do dai canh b :");
	scanf("%d", &b);
	int x= sqrt(a*a+b*b);
	printf("do dai canh huyen tam giac vuong la :%d  ", x);
}
