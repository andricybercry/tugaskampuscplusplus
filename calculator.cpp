 
#include <stdio.h>
#include <stdlib.h>

int main() {
	 float a,b,c,d;
	 main:
	 printf("\n");
	 printf("KALKULATOR SEDERHANA \n");
	 printf("============================================================== \n");
	 printf("1. Penjumlahan \n");
	 printf("2. Pengurangan \n");
	 printf("3. Perkalian \n");
	 printf("4. Pembagian \n");
	 printf("Masukan Operator : ");
	 scanf("%f",&a);
	 printf("\n");
	 
	 if(a==1)
	 {
	  printf("Masukkan bilangan pertama:");
	  scanf("%f",&b);
	  printf("Masukkan bilangan kedua:");
	  scanf("%f",&c);
	  d=b+c;
	  printf("Hasil: %f",d);
	 }
	 else if(a==2)
	 {
	  printf("Masukkan bilangan pertama:");
	  scanf("%f",&b);
	  printf("Masukkan bilangan kedua:");
	  scanf("%f",&c);
	  d=b-c;
	  printf("Hasil: %f",d);
	 }
	 else if(a==3)
	 {
	  printf("Masukkan bilangan pertama:");
	  scanf("%f",&b);
	  printf("Masukkan bilangan kedua:");
	  scanf("%f",&c);
	  d=b*c;
	  printf("Hasil: %f",d);
	 }
	 else if(a==4)
	 {
	  printf("Masukkan bilangan pertama:");
	  scanf("%f",&b);
	  printf("Masukkan bilangan kedua:");
	  scanf("%f",&c);
	  d=b/c;
	  printf("Hasil: %f",d);
	 }
	  goto main;
	 return 0;
}