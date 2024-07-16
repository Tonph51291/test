#include<stdio.h>
int main(){
 int bai;
 printf("bam 1 giai phuong trinh bac nhat\n");
 printf("bam 2 giai phuong trinh bac hai\n");
 printf("bam 3 hoc luc cua sinh vien\n");
 printf("bam 4 tien dien\n");
 printf("bam 0 thoat ra \n ");
 printf("nhap bai muon chay ");
 scanf("%d", &bai);
 float a,b,c,d,e,f,soTien,diem,soDien,hanMuc;
 switch(bai){
  case 0:
   printf("ket thuc chuong trinh");
   break;
  case 1:
  printf("gia tri cua a");
  scanf("%f", &a);
  printf("gia tri cua b");
  scanf("%f", &b);
  float x=-b/a;
  if(a==0){
    if(b==0){
     printf("Phuong trinh co vo so nghiem.\n");
    }
    else if(b!=0){
     printf("Phuong trinh vo nghiem.\n");
    }
   }
   else{
    printf("Phuong trinh co nghiem x=%f\n",x);
   }
  break;
  case 2:
    printf("Nhap gia tri a:");
   scanf("%f",&a);
   printf("\nNhap gia tri b:");
   scanf("%f",&b);
   printf("\nNhap gia tri c:");
   scanf("%f",&c);
   if(a==0){
    printf("Phuong trinh thanh %.0fx+%.0f=0\n",b,c);
   }
   else if(a!=0){
    float delta=b*b-(4*a*c);
    printf("Delta=%f \n",delta);
    if(delta<0){
     printf("Phuong trinh vo nghiem.\n");
    }
    else if(delta==0){
      float x=-b/(2*a);
      printf("Phuong trinh co nghiem kep x=%f.\n",x);
     }
    if(delta>0){
     float x1=(-b + sqrt(delta))/(2*a);
     float x2=(-b - sqrt(delta))/(2*a);
     printf("\nPhuong trinh co 2 nghiem rieng biet:\n");
     printf("X1= %f\n",x1);
     printf("X2= %f",x2);
    }
   }
  break;
  case 3:
   printf("Nhap diem cua sinh vien:");
  scanf("%f",&diem);
  if(diem>=9){
   printf("Hoc luc: xuat xac.\n");
  }
  else if(diem>=8 && diem<9){
   printf("Hoc luc: gioi.\n");
  }
  else if(diem>=6.5 && diem<8){
   printf("Hoc luc: kha.\n");
  }
  else if(diem>=5 && diem<6.5){
   printf("Hoc luc: trung binh.\n");
  }
  else if(diem>=3.5 && diem<5){
   printf("Hoc luc: yeu.\n");
  }
  else if(diem<3.5){
   printf("Hoc luc: kem.\n");
  }
  break;
  case 4:
   printf("Nhap so dien da su dung: ");
      scanf("%f", &soDien);
  if(soDien>=0 && soDien<=50){
   hanMuc = 1.678;
   soTien = hanMuc*soDien;
  }
  else if(soDien>=51 && soDien <=100){
   hanMuc = 1.734;
   soTien = hanMuc * soDien;
  }
  else if(soDien>=101 && soDien <=200){
   hanMuc = 2.014;
   soTien = hanMuc*soDien;
  }
  else if(soDien>=201 && soDien <=300){
   hanMuc = 2.536;
   soTien=hanMuc*soDien;
  }
  else if(soDien>=301 && soDien <=400){
   hanMuc  = 2.834;
   soTien = hanMuc * soDien;
  }
  else{
   hanMuc = 2.927;
   soTien = hanMuc * soDien;
  }
  printf("\nSo tien can dong la: %f * %f = %f\n", soDien, hanMuc, soTien);
 break;
  default:
  printf("\nNhap sai");
}
 }
