#include<stdio.h>
#include<conio.h>
void swap2(int *, int *);

int main()
{
	int sayi1, sayi2;   //kullanıcıdan alınacak sayıların değişkenleri
	int *p1, *p2;      //yer değiştirmek için kullanılacak pointer adresleri

	printf("Sayi1 giriniz:");
	scanf_s("%d", &sayi1);
	printf("Sayi2 giriniz:");
	scanf_s("%d",&sayi2);
	    p1 = &sayi1;     //sayi1 adresi -->p1 aktarılır
		p2 = &sayi2;    //sayi2 adresi -->p2 aktarılır
	swap2(p1, p2);     //call by reference... ana programdada değeri değiştirir
	_getch();
	return 0;
}

void swap2(int *p1, int *p2)   
{
	int temp;
	temp = *p1;    //boş olan temp değerine  p1 adresi atanır
	*p1 = *p2;    //boşalan p1 adresine p2 adresi atanır
	*p2 = temp;  //boşalan p2 adresine temp değeri atanır

	printf("Yeni Sayi1=%d ve Yeni Sayi2=%d\n", *p1, *p2); //yerleri değiştirilen adresler akrana yazdırılır.
}
