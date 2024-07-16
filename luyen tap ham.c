#include <stdio.h>

int main () {
	int m, n;
	printf("moi nhap vao so cot va so dong  :", m, n);
	scanf("%d%d", &m , &n);
	int a[m][n];
	int i, j;
	for ( i = 0 ; i < n ; i++ ) {
		for ( j = 0; j < m;j++) {
			printf("nhap pt o cot %d hang %d :", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	for ( i=0; i < n; i++){
		for ( j =0; j < m; j++) {
			printf("%d", a[i][j]);
			
		}
		printf("\n ");
	}
}
