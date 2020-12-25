#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

double sayi1;
double sayi2;
double sayi3;
double toplam;
printf("1.sayiyi giriniz:\n");
scanf("%lf",&sayi1);
printf("2.sayiyi giriniz:\n");
scanf("%lf",&sayi2);
printf("3.sayiyi giriniz:\n");
scanf("%lf",&sayi3);


toplam=sayi1*sayi2*sayi3;

printf( "sayi1= %lf\n sayi2= %lf\n sayi3= %lf\n toplam= %lf\n",sayi1,sayi2,sayi3,toplam);




	return 0;
}
