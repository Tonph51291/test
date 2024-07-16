#include <stdio.h>

int main() {
    int n,i,sum = 0;

    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Không có so chan trong khoang tu 2 den %d.\n", n);
    } else {
        for (i = 2; i <= n; i += 2) {
            sum += i;
        }
        printf("Tong cua tat ca cac so chan tu 2 den %d là: %d\n", n, sum);
    }

    return 0;
}

