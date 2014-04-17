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
	int i ;
	int j ;
	int toplam = 0;


	for (i = 2; i < 1000; i++)   //Bolunen sayilar dongu ile birlikte tek tek isleme alinir.
	{
		toplam = 0;     //dongu hep bastan basladigi icin toplam sifirlanmali her defasinda

		for (j = 1; j < i; j++)   //Bolen sayilar dongu ile birlikte tek tek isleme alinir.
		{

			if (i%j == 0)   //kalansiz bolunme olup olmadigi kontrol edilir.
			{
			  toplam=toplam+j;  //kalansiz ise toplanir. 
			}
		}

		if (toplam == i)    //toplam ve bolunen sayi esit oldugu an dongu ekrana sayiyi yazdirir.
		{
			printf("1 ile 1000 arasindaki mukemmel sayilar:%d\n", toplam);
		}
	}


	_getch();
}
