#include <stdio.h>
void veHinhChuNhat (int chieuDai, int chieuRong) {
	int i, j;
	for (i = 1; i <= chieuRong ; i++) {
		for (j = 1; j <= chieuDai ; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
int main () {
	veHinhChuNhat(10,5);
}
