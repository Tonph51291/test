#include <stdio.h>

int main () {
    int x, y, z;
    printf("Nhap so thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so thu hai: ");
    scanf("%d", &y);
    printf("Nhap so thu ba: ");
    scanf("%d", &z);
    if (x > y && x > z)
    {
        printf("So lon nhat la: %d", x);
    }
    else if (y > x && y > z)
    {
        printf("So lon nhat la: %d", y);
    }
    else if (z > x && z > y)
    {
        printf("So lon nhat la: %d", z);
    }
    return 0;
}


