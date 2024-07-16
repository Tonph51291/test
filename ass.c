#include <stdio.h>

int main () {
	int a;
	printf("Moi nhap vao so mang: ");
	scanf("%d", &a);
	int arr[a];
	int i;
	for ( i = 0; i < a; i++) {
		printf("mang %d la ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("mang nho hon 30 la :");
	for (i = 0; i < a ; i++) {
		if ( arr[i] < 30) {
			printf("%d", arr[i]);
		}
	}
}
