#include<stdio.h>
#include<conio.h>

void basamakCozumleme(int*);
void kontrolIslemi(int*, int*);

int main()
{
	int girilenSayi;
	int *x;

	printf("En az bir , en fazla on basamakli bir pozitif tam sayi giriniz:");
	scanf_s("%d", &girilenSayi);
	printf("\n\n==============================================================");

	x = &girilenSayi;

	basamakCozumleme(x);

	_getch();
	return 0;
}

void basamakCozumleme(int*x)
{
	int basamak1, basamak2, basamak3, basamak4, basamak5, basamak6, basamak7, basamak8, basamak9, basamak10;
	int temp, toplam;
	int *kontrol;

	temp = *x;

	basamak10 = temp / 1000000000;
	printf("\nGirdiginiz Sayinin 10.basamagindaki rakam--> %d\n", basamak10);

	basamak9 = (temp % 1000000000) / 100000000;
	printf("Girdiginiz Sayinin 9. basamagindaki rakam--> %d\n", basamak9);

	basamak8 = (temp % 100000000) / 10000000;
	printf("Girdiginiz Sayinin 8. basamagindaki rakam--> %d\n", basamak8);

	basamak7 = (temp % 10000000) / 1000000;
	printf("Girdiginiz Sayinin 7. basamagindaki rakam--> %d\n", basamak7);

	basamak6 = (temp % 1000000) / 100000;
	printf("Girdiginiz Sayinin 6. basamagindaki rakam--> %d\n", basamak6);

	basamak5 = (temp % 100000) / 10000;
	printf("Girdiginiz Sayinin 5. basamagindaki rakam--> %d\n", basamak5);

	basamak4 = (temp % 10000) / 1000;
	printf("Girdiginiz Sayinin 4. basamagindaki rakam--> %d\n", basamak4);

	basamak3 = (temp % 1000) / 100;
	printf("Girdiginiz Sayinin 3. basamagindaki rakam--> %d\n", basamak3);

	basamak2 = (temp % 100) / 10;
	printf("Girdiginiz Sayinin 2. basamagindaki rakam--> %d\n", basamak2);

	basamak1 = (temp % 10) / 1;
	printf("Girdiginiz Sayinin 1. basamagindaki rakam--> %d\n", basamak1);

	toplam = (basamak1*basamak1*basamak1) + (basamak2*basamak2*basamak2) + (basamak3*basamak3*basamak3) + (basamak4*basamak4*basamak4) + (basamak5*basamak5*basamak5) + (basamak6*basamak6*basamak6) + (basamak7*basamak7*basamak7) + (basamak8*basamak8*basamak8) + (basamak9*basamak9*basamak9) + (basamak10*basamak10*basamak10);
	kontrol = &toplam;
	*x = temp;

	kontrolIslemi(kontrol,x);
}

void kontrolIslemi(int*kontrol, int*x)
{
	int a, b;

	a = *kontrol;
	b = *x;

	if ( b == a)
	{
		printf("\n==================================================");
		printf("\nGirdiginiz sayinin ayri ayri basamaklarinin kupu toplami kendisine esittir.");
	}
	else
	{
		printf("\n===================================================");
		printf("\nGirdiginiz sayinin ayri ayri basamaklarinin kupu toplami kendisine esit degildir.");
	}
}
