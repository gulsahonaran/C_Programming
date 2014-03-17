//Gulsah Onaran
//contac me for anything questions
//facebook.com/gulsah.onaran
//twitter.com/gulsh_
//prepared with Microsoft Visual Studio 2013
//C programing language



#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i, sayac = 0, sonuc; 
	char cumle[BUFSIZ];  //cumle dizimizi çok değer alabilmek için BUFSIZ(0-512)aldık.



	printf("Cumle giriniz(noktalamali isaret kullanmayiniz!):\n\t\t");
	gets_s(cumle);   //girilen bütün cümleyi alabilmek için gets kullanılır.
//girilen cumle  "cumle dizisine" aktırlır.
	for (i = 0; i <= strlen(cumle); i++)    //dizinin sıfırncı elemanından başlayıp son elemanına kadar bir döngü oluşturulur.  
	{
		if (cumle[i]==' '|| cumle[i]=='/0')       //burada cümledi boşluk sayisi bulunur
		{
			sayac = sayac + 1;   //boşluk oldukça sayaç 1  artar.

		}
	}
	sonuc = strlen(cumle) - sayac;    //baştaki cümle eleman sayisindan toplam boşluk sayisi çıkınca geriye harf sayisi kalır.

	printf("Cumlenizdeki harf sayisi: %d", sonuc);  

	_getch();
}
