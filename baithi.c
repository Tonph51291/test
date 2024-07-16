#include <stdio.h>
#include <string.h>

void bai1 () {
	char tenTinh[50];
	int maVung;
	int soDan;
	char monAnDacChung[100];
	
	puts("Xin moi nhap vao ten tinh cua ban : ");
	scanf("%s", &tenTinh);
	gets(tenTinh);
	
	puts("ma vung ");
	scanf("%d", &maVung);
	getchar();
	
	puts("so dan ");
	scanf("%d", &soDan);
	getchar();
	
	
	puts("Mon an dac chuc cua que huong ban ");
	scanf("%s", &monAnDacChung);
	gets(monAnDacChung);
	
	printf("ten tin cua ban la : %s \n", tenTinh);
	printf("ma vung tinh cua ban la : %d \n", maVung);
	printf("so dan cua ban la : %d\n", soDan);
	printf("mon an cua tinh ban la: %s\n ", monAnDacChung );

	
}

void bai2 () {
	int diem;
	printf("Moi nhap vao diem cua ban: ");
	scanf("%d", &diem);

		if ( diem >= 9 ) {
			printf("ong vang\n");
			
		} else if ( diem >= 7 && diem < 9) {
			printf("gioi\n");
		} else if ( diem >= 6 && diem < 7 ) {
			printf("kha\n");
		} else if ( diem >= 5 && diem < 6 ) {
			printf("tung binh\n");
		} else {
			printf("khong du dieu kien qua mon\n");
		}
				if ( diem <= 10 && diem >= 0) {
					printf("diem khong hop le\n");
				}
	

}

int main () {
	int bai;
	do {
		printf("1.Thong tin que huong ban.\n");
		printf("2.Hoc luc.\n");
		printf("3.Thong tin tuoi nhan vien.\n");
		printf("0.Thoat.\n");
		
		printf("Moi chon chuc nang :");
		scanf("%d", &bai);
		getchar();
		switch (bai) {
			case 1 :
				bai1 ();
				break;
			case 2 :
				bai2 ();
				break;
			case 3 : 
				break;
		}
	} while ( bai != 0);
	return 0;
}
