
#include <stdio.h>

int main (){

	int so;
	do {
		printf("1:Dang ky\n");
		printf("2:Dang nhap\n");
		printf("3:Hien thi thong tin\n");
		printf("4: Nhan ESC de thoat\n");
		printf("xin moi nhap vao thao tac ban can : ");
		int so;
		scanf("%d", &so);
		switch(so){
				case 1:
					printf("Dang ky");
					break;
				case 2:
					printf("Dang nhap");
					break;
				case 3:
					printf("hien thi thong tin");
					break;
				case 4:
					printf("nhan ESC de thoat");
					break;
		}
	}while(so<=4);
	
}
