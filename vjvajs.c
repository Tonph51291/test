#include <stdio.h>
int main () {
	int n;
	scanf("%d", &n);
	int a[1000];
	int i;
	

	for ( i = 0; i < n ; i++) {
		scanf("%d", &a[i]);
		
}
	int x = a[0];
	for ( i = 0; i < n ; i++) {
		if (a[i] > x) {
			x = a[i];
		}
	}

	printf("so do la:%d ", x);
}
