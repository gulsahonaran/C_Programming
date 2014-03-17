#include<stdio.h>
#include<conio.h>

int main()
{
	int girilenSayi,kontrol;
	int  basamak3, basamak2, basamak1;

	printf("3 basamakli rakamlari birbirinden farkli bir sayi giriniz:");
	scanf_s("%d", &girilenSayi);



	basamak3 = (girilenSayi % 1000) / 100;

	basamak2 = (girilenSayi % 100) / 10;

	basamak1 = (girilenSayi % 10) / 1;
	kontrol = (girilenSayi % 10000) / 1000;
	if (kontrol = 0)
	{
		if (basamak1 == basamak2 || basamak1 == basamak3 || basamak2 == basamak3)

			printf("\n\tGirdiginiz sayinin rakamlari birbirinden farkli degil!!!");


		else
		{
			if (basamak1 > basamak2&&basamak1 > basamak3)
				printf("\n\tEn buyuk rakam olan %d rakami sagdan 1. siradadir.", basamak1);

			if (basamak2 > basamak1&&basamak2 > basamak3)
				printf("\n\tEn buyuk rakam olan %d rakami sagdan 2. siradadir", basamak2);

			if (basamak3 > basamak1&&basamak3 > basamak2)
				printf("\n\tEn buyuk rakam olan %d rakami sagdan 3. siradadir", basamak3);

		}
	}
	else
	{
		printf("3 basamakli bir sayi giriniz!!!");
	}



	_getch();

}
