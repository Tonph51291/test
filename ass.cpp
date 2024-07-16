#include <stdio.h>
int main(void) {
	int so ;
	do {
		printf("\nXin moi chon mot chuc nang\n");
		printf("1. Kiem tra so nguyen\n"); 
		printf("2. Tim uoc so chung va boi so chung cua hai so\n");
		printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
		printf("4. Tinh tien dien\n");
		printf("5. Chuc nang doi tien\n"); 
		printf("6. Tinh lai suat vay ngan hang va vay tra gop\n");
		printf("7. Chuong trinh vay tien mua xe\n"); 
		printf("8. Sap xep thong tin sinh vien\n"); 
		printf("9. Xay dung game FPOLY_LOTT\n"); 
		printf("10. Chuong trinh tinh toan phan so\n"); 
		printf("11. Thoat menu\n"); 
		printf("Hay dua ra lua chon cua ban: ");
		scanf("%d", &so);
		switch (so) {
			case 1:
				printf("\nDa thuc hien xong chuc nang\n");
				break;
			case 2:
				printf("\nDa thuc hien xong chuc nang\n");
				break;
			case 3:
				printf("\nDa thuc hien xong chuc nang\n");
				break;
			case 4:
				printf("\nDa thuc hien xong chuc nang\n");
				break;
			case 5:
				printf("\nDa thuc hien xong chuc nang\n");
				break;
			case 6:
				printf("\nDa thuc hien xong chuc nang\n");
				break;
			case 7:
				printf("\nDa thuc hien xong chuc nang\n");
				break;
			case 8:
				printf("\nDa thuc hien xong chuc nang\n");
				break;
			case 9:
				printf("\nDa thuc hien xong chuc nang\n");
				break;
			case 10:
				printf("\nDa thuc hien xong chuc nang\n");
				break;
			case 11:
				printf("\nDa thoat khoi menu");
				break;
		    default:
		    	printf("\nYeu cau nhap dung so\n");
		}   
	} 
	while( so != 11 );
	return 0;
}

