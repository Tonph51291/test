#include <stdio.h>
#include <string.h>

int main () {
	char ho[10];
	char ten[10];
	printf("ho cua ban la : ");
	gets(ho);
	printf("ten cua ban la : ");
	gets(ten);
	printf("ho ban la %s \n ten cua ban la %s", ho, ten);
	char ho1[] = "bui";
	char ten2[] = "ton";
	if ( strcmp(ho,ho1) == 0 && strcmp(ten,ten2) == 0) {
		printf("dung");
	} else {
		printf("sai");
	}
}
