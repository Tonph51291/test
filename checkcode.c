#include <stdio.h> 
#include<string.h>
#include<conio.h>
void nhapthongTincanhan()
{
	char nhapTen[50];
	int tuoi;
	char diaChi[50];
	int kyHoc;
	char chuyenNganh[50];

	puts("\nVui long nhap ten cua ban :");
	
	gets(nhapTen);

    printf("\nVui long nhap tuoi cua ban : ");
    scanf("%d",&tuoi);
    getchar();
    puts("\nVui long nhap dia chi cua ban :");
    gets(diaChi);
    
    printf("\nVui long nhap ky hoc :");
	scanf("%d",&kyHoc);
	getchar();
	
	puts("\nVui long nhap chuyen nganh cua ban :");
	gets(chuyenNganh);
	
	printf("\nTen ban la : %s", nhapTen);
	printf("\nTuoi ban la :%d",tuoi);
	printf("\nDia chi cua ban la :%s",diaChi);
	printf("\nBan hoc ky :%d",kyHoc);
	printf("\nChuyen nganh ban hoc la :%s",chuyenNganh);
}
void tinhTong(){
	int main(){
		int n ,i ,sum = 0;
		printf("Vui long nhap n :\n");
		scanf("%d",&n);
		for(i=1 ; i< n ;i++){
			sum +=1;
			printf("Tong cac so tu 1 den %d la %d",n,sum);
		}
	}
}
int main(){
	while(1){
	int chon;
	printf("\n==================MENU==================\n");
	printf("Nhan 1 : Nhap thong tin ca nhan\n");
	printf("Nhan 2 : Tinh tong\n");
	printf("Nhan 3 : Thong tin sinh vien cac lop\n");
	printf("Nhan 0 : Thoat\n");
	printf("Moi ban chon\n");
	scanf("%d",&chon);
	getchar();
	switch(chon){
	
	case 1:
		printf("Nhap thong tin ca nhan cua ban!\n");
		nhapthongTincanhan();
		break;
	case 2:
		printf("Tinh tong\n");
		tinhTong();
		break;		
	defaul:
		printf("Moi ban nhap lai !");		
}
	}
	return 0;
}
