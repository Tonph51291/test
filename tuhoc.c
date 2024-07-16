#include <stdio.h>
int main(){
	int so = 1;
	int tong=0;
	while(so<=1000){
		tong+=so;
		so++;
	}
	printf("tong la :%d",tong);
}
