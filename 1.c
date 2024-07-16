#include <stdio.h>
void main () {
	int x;
	int y;
	printf("Nhap chieu dai cua hinh chu nhat :", x );
	scanf("%d", &x);
	printf("Nhap chieu rong cua hinh chu nhat :", y );
	scanf("%d", &y);
	veHinhChuNhat(x,y);
}
int veHinhChuNhat ( int x , int y) {
	int i, j;
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
if(i == 0 || i == x - 1 || j == 0 || j == y - 1) {
            printf("* ");
} else {
printf("  ");
}
        }
        printf("\n");
		   return 0;
	}
}
