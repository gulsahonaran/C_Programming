#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main()
{
	int sayi1, sayi2;           //Kullanıcıdan alınan sayilar. Bu sayilar birbiri arasında yer değiştirilerek swap yapılacaktır.
	int z;                     //Değerin geçici olarak atandığı temp değeri

	printf("Sayi1 giriniz : ");
	scanf_s("%d", &sayi1);
	printf("Sayi2 giriniz : ");
	scanf_s("%d", &sayi2);

	z = sayi1;                                       //sayi1 değerini z'ye aktarır.
	sayi1 = sayi2;                                 //boş olan sayi1 değerine sayi2 değeri eklenir.
	sayi2 = z;                                    //boş olan sayi2 değerine ise başta aktarılan z değeri atanır.

	printf("Yeni sayi1 = %d Yeni sayi2 = %d\n", sayi1, sayi2);

	_getch();
	return 0;
}
