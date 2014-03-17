//Gulsah Onaran 
//contac me for anything questions
//facebook.com/gulsah.onaran
//twitter.com/gulsh_
//prepared with Microsoft Visual Studio 2013
//C programing language


#include<stdio.h>
#include<conio.h>

int main()
{
	int i;             //asal sayilari bulmasi için yazilan dongunun ne kadar donmesi gerektigini soyleyen degisken.
  int n;            //kullanici tarafindan girilen pozitif tamsayi
	int sayac = 4;     //kac adet asal tam sayinin oldugunu saymak icin kullanilan sayac


	printf("Pozitif tam sayi giriniz:");   //kullanicidan pozitif tam sayi istenir.
	scanf_s("%d", &n);


	if (n >= 1)        //girilen sayinin pozitif olup olmadigini kontrol eden kosul
	{
		printf(" \tAsagidaki sayilar asaldir.\n"); //Asagida yazdigim asal sayi bulma issteminde bu asal sayilarla kisitlama yaptigim icin bu sayilari basta ekrana yazdiriyorum donguye girmeden
		if (2 <= n)
			printf("1. asal sayi:2\n");               //Bu sekilde hem kacinci asal sayi oldugunu  hem de asal sayinin kendisini yazdirdim
		if (3 <= n)
			printf("2. asal sayi:3\n");
		if (5 <= n)
			printf("3. asal sayi:5\n");
		if (7 <= n)
			printf("4. asal sayi:7\n");



		for (i = 2; i <= n; i++)   //dongunun nereye kadar devam edicegini belirleyen i sayisi ve kisitlamalari
		{
			if (i % 2 == 1 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
			{


				if ((i + 1) % 2 != 0 || (i + 2) % 2 != 0 || (i + 4) % 2 != 0 || (i + 6) % 2 != 0)   // asal sayilar arasinda 1,2,4 ve 6 artislarla gider bu durumu dusunerek bu sekilde bir kosul yazdim
				{
					sayac = sayac + 1;
					printf("%d. asal sayi:%d\n", sayac, i);

				}
			}

		}
	}


	else
		printf("Lutfen pozitif tam sayi giriniz.");
	_getch();
}
