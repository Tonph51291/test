#include <stdio.h>
int main () {
	int n; 
	printf("nhap so luong pt : ");
	scanf("%d", &n);
	int a[n];
	int i ;
	for ( i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for ( i = 0; i < n; i++) {
		printf("%d ", &a[i]);
	}
	return 0;
	
}
