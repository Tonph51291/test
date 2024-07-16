#include <stdio.h>
#include <string.h>
void bai1 () {
	
	char ten[50];
	int tuoi;
	char diaChi[50];
	int kyHoc;
	char chuyenNganh[50];
	
	puts(" ten ban la gi : ");
	scanf("%s", &ten);
	gets(ten);
	puts("ban bao nhieu tuoi : ");
	scanf("%d", &tuoi);
	getchar();
	puts("ban o dau: ");
	gets(diaChi);
	puts("ban hoc ky may : ");
	scanf("%d", &kyHoc);
	getchar();
	puts("chuyen nganh cua ban la gi : ");
	gets(chuyenNganh);
	printf("ten cua ban la : %s \n", ten);
	printf("tuoi cua ban la : %d \n", tuoi);
	printf("dia chi cua ban la : %s\n", diaChi);
	printf("ban dang hoc ky : %d\n ", kyHoc );
	printf("chuyen nganh cua ban la : %s\n", chuyenNganh);

}
void bai2 () {
	int n;
	printf("moi nhap vao so nguyen");
	scanf("%d", &n);
	int i  ;
	int sum = 0;
	for ( i = 1; i <= n ; i++) {
		
		sum += i;
	}
	printf("tong cuar dau so nguyen tu 1 den %d la : %d",  n, sum);

}




int main () {
		int bai;
	do {

	printf("+--------------------------Menu------------------------+\n");
	printf("1. Thong tin ca nhan \n");
	printf("2. Tinh tong \n");
	printf("3. Thong tin sinh vien cac lop\n ");
	printf("0. Thoat\n");
	puts(" Nhap vao bai toan :" );
	scanf("%d ", &bai);
	getchar;
	switch (  bai) {
		case 1 :
			bai1 ();
			break;
		case 2 :
			break;
		case 3 :
			break;

	}
} while (bai != 0);
	return 0;
}
