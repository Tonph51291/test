#include <stdio.h> 
#include<string.h>
#include<conio.h>
struct sinhVien
{
    char tenSV[50];
    char msSV[50];
    char tuoi[50];
    float diem;
};

int main()
{
	int i, j ,n ;
	printf("Vui long nhap so sinh vien muon them :");
	scanf("%d",&n);
    struct sinhVien nhomSV[n];
    for ( i = 0 ; i < n ;i++)
    {
    	printf("Vui long nhap ma so sinh vien: ");
    	ffush(stdin);
    	gets(nhomSV[i].msSV);
    	printf("\nVui long nhap ten sinh vien: ");
    	ffush(stdin);
    	gets(nhomSV[i].tenSV);
    	printf("\nVui long nhap tuoi cua sinh vien: ");
    	ffush(stdin);
    	gets(nhomSV[i].tuoi);
    	printf("\nVui long nhap diem cua sinh vien: ");
    	scanf("%f",&nhomSV[i].diem);
    	
	}
	char msSV[10];
	printf("Nhap mssv can tim: ");
	ffush(stdin);
	gets(msSV);
	for ( i = 0;i < n ; i++)
	{
		if(strcmp(nhomSV[i].msSV,msSV)==0)
		{
			printf("\n");
		printf("\nMa so sinh vien: %s",nhomSV[i].msSV);
		printf("\nTen sinh vien: %s",nhomSV[i].tenSV);
		printf("\nTuoi cua sinh vien: %s",nhomSV[i].tuoi);
		printf("\nDiem cua sinh vien: %.2f",nhomSV[i].diem);
		}
	}
	_getch();
	return 0;
}

