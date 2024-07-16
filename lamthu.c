#include <stdio.h>

void bai1 () { 
	char maSV [50];
	char ten[50];
	int namSinh;
	int diemMonC;
	
	puts("ma sinh vien cua ban la gi : ");
	gets(maSV);
	
	puts("ten cua ban la :");
	gets(ten);
	
	puts("ban sinh nam bao nhieu :");
	scanf("%d", &namSinh);
	getchar();
	
	puts("diem thi cua ban bao nhieu : ");
	scanf("%d", &diemMonC);
	getchar();
	
	printf("Ma sinh vien cua ban la : %s \n", maSV);
	printf("Ten cua ban la : %s \n", ten);
	printf("Nam sinh cua ban la: %d \n", namSinh);
	printf("diem thi cua ban la : %d \n", diemMonC);
}
void bai2() {
	char tenSanPham[50];
	int trongLuong;
	
	puts("xin moi nhap ten san pham : ");
	gets(tenSanPham);
	
	puts("Trong luong san pham la : ");
	scanf("%d", &trongLuong);
	getchar ();
	

	printf("ten san pham cua ban la : %s \n", tenSanPham);
	printf("trong luong san pham la :%d kg \n", trongLuong);
	if ( trongLuong >= 10 ) {
		printf("NANG \n");
	} else {
		printf("Nhe \n");
	}
	
}



int main () {
	int luaChon;
	do {
	
		printf("1.Thong tin sinh vien\n");
		printf("2.Thong tin san pham\n");
		printf("3.Cong cac so\n");
		printf("4.Cong cac so index le\n");
		printf("5.Nhap khoang so tu 1 den 10\n");
		printf("6.Sap xep tu lon den be\n");
		printf("7.Xep loai hoc luc\n");
		printf("0.Thoat\n");
		printf("xin moi chon chuong chinh :\n");
		scanf("%d", &luaChon);
		getchar();
		switch ( luaChon ) {
			case 1:
				bai1() ;
				break;
			case 2:
				bai2() ;
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			
		}
	} while ( luaChon !=0 );
}
