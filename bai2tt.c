#include <stdio.h>

int main () {
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
