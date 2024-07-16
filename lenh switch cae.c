#include <stdio.h>
 int  main () {
/*	int n ;
	scanf("%d", &n);
	switch (n) {
		case 1:
			printf("aha,n,sknsk.");// co the viet case 1: case 2 : case 3 .......
			break ;					// nhung lenh int ra phai giomg nhau
		case 2:
			printf("hkjhhnsakjnnsd");
			break;
			
			
		default:
			printf("khog hop le");
			
	}
 }*/
	 int a = 300 , b = 200;
	 char kyTu  ;
	 scanf("%c", &kyTu);
	 switch (kyTu) {
		case '+':
			printf("%d", a+b);
			break ;
		default:
			printf("moi nhap lai");
	 }
}
