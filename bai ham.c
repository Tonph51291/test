#include <stdio.h>
void main () {
	int x, y, z;
	printf("x=\n");
	x=nhapSoNguyenDuong(x);
	printf("y=\n");
	y=nhapSoNguyenDuong(y);
	printf("z=\n");
	z=nhapSoNguyenDuong(z);
	int tong = x + y+ z;
	printf("%d", &tong);
}
int nhapSoNguyenDuong () {
	
	
	int so;

	do {
		printf("so la ");
		scanf("%d", so );
	}while (so <= 0);
	return so;
}
