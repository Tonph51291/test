#include <stdio.h>

int tinhLuyThua(int m, int n) {
	int luyThua;
	
	if (n == 0) {
		luyThua = 1;
	}
	else {
		int i;
		for (i = 1; i <= n; i++) {
			if (i == 1) {
				luyThua = m;
			}
			else {
				luyThua = luyThua * m;
			}
		}
	}
	
	return luyThua;
}

void main() {
	printf("%d", tinhLuyThua(2, 3));
}

