#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void chucNang1 () {
    float so;  
   printf ("\nMoi nhap so: ");
   scanf ("%f", &so);
   
   if ( so == (int)so ) {
       printf ("\n%g la so nguyen\n", so);
   } else {
        printf ("\n%g khong phai la so nguyen\n", so);
   }
      
    if( so > 1 && so == (int)so) {
    	int soNT = so;
		int i;
		int kiemTra = 1;
		for(i = 2; i <= sqrt(soNT); i++)  {
			if( soNT % i == 0 ) {
				kiemTra = 0;
				break;
			}
	}	
		if( kiemTra == 1) {
			printf("%d la so nguyen to \n", soNT);
		} else {
			printf("%d khong phai la so nguyen to \n", soNT);
	}	}		
	   else {
		printf ("%g khong phai la so nguyen to \n", so);
	} 
	

    if ( so > 0  && (sqrt(so) == (int)sqrt(so)) ) {
    	printf ("%g la so chinh phuong\n", so);
	} else {
		printf ("%g khong phai la so chinh phuong\n", so);
	}
}

void chucNang2 () {
    int a, b;
	printf("\nNhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	
	if( a == 0 && b == 0 ) {
			printf("\nKhong ton tai UCLN, BCNN\n");
		} else if ( a == 0 || b == 0 ) {
			printf("\nKhong co BCNN, UCLN = %d\n", ( a == 0 ) ? b : a );
		} else if ( a >0 && b>0 ){ 
			int bc = a * b;			
			while( a != b ) {
				if( a > b ) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("UCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}
		
	else if (a < 0 && b >0 ) {
		int bc = a * b;
		a = -a;
		while ( a != b )  {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", -bc / b);
		}
   
    else if ( a > 0 && b < 0 ) {
		int bc = a * b;
		b = -b;
		while ( a != b ) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", -bc / b);
		} else {
    	int bc = a * b;
		a = -a;
		b = -b;
		while( a != b ) {
				if( a > b ) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}
}

void chucNang3 () {
   int gioBatDau, gioKetThuc, thoiGian, gioGiamGia;
   float tien, giamGia, gioLonHon4; 
   const int gio = 4;
    
   printf ("\nGio bat dau: ");
   scanf ("%d", &gioBatDau);
   printf ("Gio ket thuc: ");
   scanf ("%d", &gioKetThuc);
   thoiGian = gioKetThuc - gioBatDau;
   gioGiamGia = thoiGian - 4;
   tien = thoiGian*50000;
   giamGia = gioGiamGia*50000;
   
   if ( gioBatDau >= 12 && gioKetThuc <= 23  ) {
       if ( thoiGian <= 4 && gioBatDau < 14 || gioBatDau >= 17) {
           printf ("\nSo tien can thanh toan la: %g\n", tien);
       } else if (thoiGian <= 4 && gioBatDau >= 14 && gioBatDau <17) {
           printf ("\nSo tien can thanh toan la: %g\n", tien-(tien*0.1));
       } else if ( thoiGian > 4 && gioBatDau < 14 || gioBatDau >= 17) {
    		gioLonHon4 = (gio*50000)+(giamGia-(giamGia*0.3));       
            printf ("\nSo tien can thanh toan la: %g\n", gioLonHon4);
       } else {
    		gioLonHon4 = (gio*50000)+(giamGia-(giamGia*0.3));       
           printf ("\nSo tien can thanh toan la: %g\n", gioLonHon4-(gioLonHon4*0.1));
       } }
    else {
		 printf ("\nQuan chi hoat dong trong khoang 12h-23h\n");
	}
}

void chucNang4 () {
	int kwh;
	
	do {
	printf ("\nMoi nhap so kWh dien: ");
	scanf ("%d", &kwh);
	}
	while ( kwh < 0 );
	if ( kwh == 0 ) {
		printf ("\nKhong can tra tien\n");
		} else {
	if ( kwh >= 0 && kwh <= 50 ) {
		printf ("So tien phai tra la: %g\n", 50.000*1.687);
		}
		else if (kwh <= 100) {
			printf ("So tien phai tra la: %g\n", 50.000*1.734);
		}
		else if (kwh <= 200) {
			printf ("So tien phai tra la: %g\n", 50.000*2.014);
		}
		else if (kwh <= 300) {
			printf ("So tien phai tra la: %g\n", 50.000*2.536); 
		}
		else if (kwh <= 400) {
			printf ("So tien phai tra la: %g\n", 50.000*2.834);
		} else {
		printf ("So tien phai tra la: %g\n", 50.000*2.927);
		}
    }
}

void chucNang5(){
    int tien, menhGia[9] = {500, 200, 100, 50, 20, 19, 5, 2, 1}, i = 0;
    int soTo[9] = {0};
	
	do{
		printf ("\nMoi nhap so tien: ");
		scanf ("%d", &tien);
	}
	while( tien <= 0 );	
	while ( i < 9)  {
		if ( tien > menhGia[i] ) {
			break;
		} else {
			i++; 
		}
	}
	
	while ( i < 9 ) {
		soTo[i] = tien / menhGia[i];
		tien = tien % menhGia[i];
		i++;
	}
	printf ("\nDoi duoc:");
	
	for ( i = 0; i < 9; i++ ) {
		if ( soTo[i] > 0 ) {
			printf ("\n%d to %d", soTo[i], menhGia[i]);
		}
	}
	printf ("\n");
}

void chucNang6 () {
	float tien, vay, lai, traHangThang, tong;
	int i;
	
	printf ("\nMoi nhap so tien can vay: ");
	scanf ("%f", &vay);
	printf ("\nKy han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai");
	
	traHangThang = vay / 12;
		
	for ( i = 1; i <= 12; i++) {
		lai = vay * 0.05;
		tong = lai + traHangThang;
		vay -= traHangThang;
		printf ("\n%d\t%2.f\t\t%2.f\t\t%2.f\t\t\t%2.f", i, lai, traHangThang, tong, vay);
	}
		
		
	printf ("\n");
}

void tinhVay ( float phanTram ) {
	int i;

}

void chucNang7 () {
    int i;
	float phanTram;
	do{
	printf ("\nMoi nhap so phan tram tien vay: ");
	scanf ("%f", &phanTram);
	}
	
	while ( phanTram <= 0 || phanTram > 1.0 );
	double phanTramTraTruoc = 1.0 - phanTram;
	double tien = 500000000;
	
	double tienTraTruoc = tien * phanTramTraTruoc;
	tien -= tienTraTruoc;
	
	double traHangNam = tien / 24;
	
	printf ("So tien tra truoc la: %.2lf", tienTraTruoc);
	printf ("\nSo tien con lai phai tra\n");
	printf ("\nKy han\tTien lai phai tra\tTien goc phai tra\tTong tien phai tra\t So tien con lai phai tra");
	
	for ( i = 1; i <= 24; i++ ) {
		double laiPhaiTra = tien * 7.2;
		double tong = laiPhaiTra + traHangNam;
		tien -= traHangNam;
		
		printf ("\n%d \t%.2lf \t\t%.2lf  \t\t%.2lf  \t\t%.2lf", i, laiPhaiTra, traHangNam, tong, tien);}
		
	printf ("\n");		
}



    struct SinhVien{
    char ten[20];
    int tuoi;
    float diem;
    char hocLuc[20];
};

void nhapThongTin( struct SinhVien danhSach [], int *n ) {
    int i;
    
    printf ("\nMoi nhap so luong sinh vien: ");
    scanf ("%d", n);
    
    for (i = 0; i < *n; i++){
        printf ("\nMoi nhap hoc sinh thu %d: ", (i + 1));
        fflush (stdin);
        gets( danhSach[i].ten);
        
        do{
        printf ("Moi nhap tuoi: ");
        scanf ("%d", &danhSach[i].tuoi);
		}
        while (danhSach[i].tuoi <= 0);
        
        do{
        printf ("Moi nhap diem: ");
        scanf ("%f", &danhSach[i].diem);}
        while (danhSach[i].diem < 0);}
    }
    
void sapXep(struct SinhVien danhSach[], int n){
    int i, j;
    
    for ( i = 0; i < n; i++) {
        for (j = n; j > i; j--) {
            if( danhSach[j].diem > danhSach[j - 1].diem) {
                struct SinhVien dSTamThoi = danhSach[j];
                danhSach[j] = danhSach[j - 1];
                danhSach [j - 1] = dSTamThoi;
				}             
            }
        }
}

void hocLuc( struct SinhVien danhSach[], int n) {
    int i;
    
    for ( i = 0; i < n; i++){
        if(danhSach[i].diem >= 9){
        strcpy(danhSach[i].hocLuc,"Hoc luc xuat sac");
		}
        else if(danhSach[i].diem >= 8) {
        strcpy(danhSach[i].hocLuc,"Hoc luc gioi");
		}
        else if(danhSach[i].diem >= 6.5) {
        strcpy(danhSach[i].hocLuc,"Hoc lua kha");
		}
        else if(danhSach[i].diem >= 5) {
        strcpy(danhSach[i].hocLuc,"Hoc luc TB");
		} else {
        strcpy(danhSach[i].hocLuc,"Hoc luc yeu");
		}       
    }
}

void hienThi ( struct SinhVien danhSach[], int n) {
    int i;
    
    printf ("\nSTT\tTen sinh vien\t\tDiem\tHoc luc\n");
    for ( i = 0; i < n; i++) {
        printf ("%d\t%s\t\t%g\t%s\n", (i + 1), danhSach[i].ten, danhSach[i].diem, danhSach[i].hocLuc);
	}        
}

void chucNang8 () {
    struct SinhVien danhSach[40];
    int n;
    
    nhapThongTin( danhSach , &n);
    sapXep(danhSach, n);
    hocLuc(danhSach, n);
    hienThi(danhSach, n);

}



void chucNang9(){
	int a, b;
	srand(time(NULL));
	
	do {
	printf ("\nMoi nhap 2 so a, b: ");
	scanf ("%d %d", &a, &b);
	}
	while ( a < 0 || b < 0 || a > 15 || b > 15 || a == b );
	printf ("\nSo ban chon la: %d %d", a, b);
	printf("\nKet qua so xo la: ");
	
		int ranDom1 = 1 + rand() % 15;
		int ranDom2 = 1 + rand() % 15;
	
	printf ("%d %d\n", ranDom1, ranDom2);	 	
	
	if ((a == ranDom1 && b == ranDom1) || (a == ranDom2 && b == ranDom1) ){
		printf ("\nChuc mung ban da trung giai nhat\n");
	}
	else if (a == ranDom1 || b == ranDom1 || a == ranDom2 || b == ranDom2 ){
		printf ("\nChuc ming ban da trung giai nhi\n");
	}
	else 
	printf ("\nChuc ban may man lan sau\n");
    }



    struct phanSo {
	int tu;
	int mau;
}; 

	struct phanSo nhap () {
	struct phanSo phanSo;
	
	printf("\nMoi nhap tu so: ");
	scanf("%d", &phanSo.tu);
	do{
		printf ("Moi nhap mau so: ");
		scanf ("%d", &phanSo.mau);
	}
	while (phanSo.mau == 0);
	
	return phanSo;
}

struct phanSo cong ( struct phanSo so1, struct phanSo so2 ) {
	struct phanSo tong;
	if ( so1.mau == so2.mau ) {
	tong.tu = so1.tu + so2.tu;
	tong.mau = so1.mau;
	} else {
	tong.tu = so1.tu * so2.mau + so2.tu * so1.mau;
	tong.mau = so1.mau * so2.mau;
	}
	return tong;
}

struct phanSo tru (struct phanSo so1, struct phanSo so2) {
	struct phanSo hieu;
	if (so1.mau == so2.mau) {
	hieu.tu = so1.tu - so2.tu;
	hieu.mau = so1.mau;
	} else {
	hieu.tu = so1.tu * so2.mau - so2.tu * so1.mau;
	hieu.mau = so1.mau * so2.mau;
	}
	return hieu;
}

struct phanSo nhan(struct phanSo so1, struct phanSo so2){
	struct phanSo tich;
	tich.tu = so1.tu * so2.tu;
	tich.mau = so1.mau * so2.mau;
	return tich;
}
	
struct phanSo chia(struct phanSo so1, struct phanSo so2){
	struct phanSo thuong;
	thuong.tu = so1.tu * so2.mau;
	thuong.mau = so1.mau * so2.tu;
	return thuong;
}

void chucNang10(){
	struct phanSo phanSo1 = nhap();
	
	struct phanSo phanSo2 = nhap();
	
	struct phanSo tong = cong(phanSo1, phanSo2);
	
	struct phanSo hieu = tru(phanSo1, phanSo2);
	
	struct phanSo tich = nhan(phanSo1, phanSo2);
	
	struct phanSo thuong = chia(phanSo1, phanSo2);
	
	printf ("\nTong 2 phan so la: %d/%d + %d/%d = %d/%d ", phanSo1.tu, phanSo1.mau, phanSo2.tu, phanSo2.mau, tong.tu, tong.mau);
	
	printf ("\nHieu 2 phan so la: %d/%d - %d/%d = %d/%d ", phanSo1.tu, phanSo1.mau, phanSo2.tu, phanSo2.mau, hieu.tu, hieu.mau);
	
	printf ("\nTich 2 phan so la: %d/%d * %d/%d = %d/%d ", phanSo1.tu, phanSo1.mau, phanSo2.tu, phanSo2.mau, tich.tu, tich.mau);
	
	printf ("\nThuong 2 phan so la: %d/%d : %d/%d = %d/%d \n", phanSo1.tu, phanSo1.mau, phanSo2.tu, phanSo2.mau, thuong.tu, thuong.mau);
}

void menu () {
    int luaChon;
    printf ("\n+-------------------------Menu-------------------------+\n");
	printf ("\n  1.Kiem tra so nguyen");
	printf ("\n  2.Tim uoc so chung va boi so chung cua 2 so");
	printf ("\n  3.Tinh tien cho quan Karaoke");
	printf ("\n  4.Tinh tien dien");
	printf ("\n  5.Chuong trinh doi tien");
	printf ("\n  6.Tinh lai suat vay ngan hang vay tra gop");
	printf ("\n  7.Chuong trinh vay tien mua xe");
	printf ("\n  8.Sap xep thong tin sinh vien");
	printf ("\n  9.Xay dung game Fpoly-LOTT");
	printf ("\n  10.Chuong trinh tinh toan phan so");	
	printf ("\n  0.Thoat\n");
	printf ("\n+------------------------------------------------------+");
	printf ("\n\nChon chuong trinh: ");	
	scanf ("%d", &luaChon);
	
	switch (luaChon){
	    case 1:
	    chucNang1();
	    break;
	    
	    case 2: 
	    chucNang2();
	    break;
	    
	    case 3:
	    chucNang3();
	    break;
	    
	    case 4: 
	    chucNang4();
	    break;
	    
	    case 5:
	    chucNang5();
	    break;
	    
	    case 6:
	    chucNang6();
	    break;
	    
	    case 7:
	    chucNang7();
	    break;
	    
	    case 8:
	    chucNang8();
	    break;
	    
	    case 9:
	    chucNang9();
	    break;
	    
	    case 10:
	    chucNang10();
	    break;
	    
	    case 0: exit(0);
	    
	}
}

int main () {
    while ( 11) {
        menu();
    }
    
    return 0;
}



