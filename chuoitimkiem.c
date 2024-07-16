#include <stdio.h>
#include <string.h>

int main () {
	char x[] = "bui duy ton";
	char *a;
	a = strstr(x,"t");
	printf("da tim thay %s ", a);
}
