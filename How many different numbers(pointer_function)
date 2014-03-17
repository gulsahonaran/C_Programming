#include<stdio.h>
#include<conio.h>

void islem(int*);

int main()
{
	int girilenSayi;
	int basamak4, basamak3, basamak2, basamak1;
	int *x;

	printf("4 basamakli bir sayi giriniz:");
	scanf_s("%d",&girilenSayi);
	x = &girilenSayi;

	islem(x);


	_getch();
	return 0;
}
void islem(int*x)
{
	int basamak4, basamak3, basamak2, basamak1;
	int girilenSayi;

	girilenSayi = *x;

	basamak4 = (girilenSayi % 10000) / 1000;
	printf("Girdiginiz Sayinin 4. basamagindaki rakam--> %d\n", basamak4);

	basamak3 = (girilenSayi % 1000) / 100;
	printf("Girdiginiz Sayinin 3. basamagindaki rakam--> %d\n", basamak3);

	basamak2 = (girilenSayi % 100) / 10;
	printf("Girdiginiz Sayinin 2. basamagindaki rakam--> %d\n", basamak2);

	basamak1 = (girilenSayi % 10) / 1;
	printf("Girdiginiz Sayinin 1. basamagindaki rakam--> %d\n", basamak1);
	if (basamak1 == basamak2&&basamak2 == basamak3&&basamak3 == basamak4)
	{
		printf("Girdiginiz sayinin butunn rakamlari birbirine esittir.");
	}
	if (basamak1 != basamak2&&basamak2 == basamak3&&basamak3 == basamak4)
	{
		printf("Girdiginiz sayi 1 farkli rakamdan olusmaktadir.");
	}
	if (basamak1 == basamak3&&basamak2 != basamak3&&basamak3 == basamak4)
	{
		printf("Girdiginiz sayi 1 farkli rakamdan olusmaktadir.");
	}
	if (basamak1 == basamak2&&basamak2 != basamak3&&basamak2 == basamak4)
	{
		printf("Girdiginiz sayi 1 farkli rakamdan olusmaktadir.");
	}
	if (basamak1 == basamak2&&basamak2 == basamak3&&basamak3 != basamak4)
	{
		printf("Girdiginiz sayi 1 farkli rakamdan olusmaktadir.");
	}
	if (basamak1 == basamak2&&basamak1 != basamak3&&basamak3 == basamak4)
	{
		printf("Girdiginiz sayi  2 farkli rakamdan olusmaktadir.");
	}
	if (basamak1 == basamak3&&basamak2 == basamak4&&basamak1 != basamak2)
	{
		printf("Girdiginiz sayi 2 farkli rakamdan olusmaktadir.");
	}
	if (basamak1 == basamak4&&basamak2 == basamak3&&basamak1 != basamak2)
	{
		printf("Girdiginiz sayi 2 farkli rakamdan olusmaktadir.");
	}
	if (basamak1 == basamak2&&basamak2 != basamak3&&basamak2 != basamak4&&basamak3 != basamak4)
	{
		printf("Girdiginiz sayi 3 farkli rakamdan olusmaktadir.");
	}
	if (basamak1 != basamak2&&basamak2 == basamak3&&basamak3 != basamak4&&basamak1 != basamak4)
	{
		printf("Girdiginiz sayi 3 farkli rakamdan olusmaktadir.");
	}
	if (basamak1 != basamak2&&basamak2 != basamak3&&basamak3 == basamak4&&basamak1 != basamak2)
	{
		printf("Girdiginiz sayi 3 farkli rakamdan olusmaktadir.");
	}
	if (basamak1 != basamak2&&basamak2 != basamak3&&basamak3 != basamak4&&basamak1 == basamak4)
	{
		printf("Girdiginiz sayi 3 farkli rakamdan olusmaktadir.");
	}
	if (basamak1 != basamak2&&basamak2 != basamak3&&basamak3 != basamak4&&basamak1 != basamak4&&basamak2 != basamak4)
	{
		printf("Girdiginiz sayi 4 farkli rakamdan olusmaktadir.");
	}
}
