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
	double aUlkesi = 10;                       //A Ulkesinin baslangic nufusu
	double bUlkesi = 40;                      //B Ulkesinin baslangic nufusu
	int i;                                   //Dongu icin girilen degisken
	int yil = 0;                            //Bulunacak olan yil degiskeni
	double aArtis = 0;                       //A ulkesinin artis miktari
	double bArtis = 0;                      //B ulkesinin artis miktari
	for (i = 1; i++;)                    //A Ulkesi B Ulkesini gecinceye yapar devam edicek olan dongu
	{
		aArtis = ((aUlkesi * 25) / 100);                       //A Ulkesinin artis oraniyla artis hesaplamasi
		aUlkesi = aArtis + aUlkesi;                                       //Artis miktari her döngüye girdikce degisir
		bArtis = ((bUlkesi * 12) / 100);                     //B Ulkesinin artis oraniyla artis hesaplamasi
		bUlkesi = bArtis + bUlkesi;                                     //Artis miktari her döngüye girdikce degisir
		yil = yil + 1;                                                 //dongu tekaraladikca artar ve donguyu sayisini sayar bu şekilde kac yil sonra oldugunu hesaplayabiliriz
		if (aUlkesi > bUlkesi)                                        //Eger bu kosul olursa dongu sonlanır ve ekrana yil yazilir.
		{
			printf("%d yil sonra A ulkesinin Nufusu B Ulkesinin Nufusunu gecer. ", yil);
			break;                                                            //donguyu sonlandirmak icin break ifadesi kullanilir.
		}
	}
	_getch();
}
