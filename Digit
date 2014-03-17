//Gulsah Onaran
//contac me for anything questions
//facebook.com/gulsah.onaran
//twitter.com/gulsh_
//Visual Studio 2010 ile hazırlanmıştır.

//C programlama dilinde yazılmıştır.
//4 ve 4den daha az basamaklı sayıların basamaklarına çözümleme programıdır.
//Hangi sayının hangi basamak olduğunu yazar ve sayının kaç basamaklı olduğunu yazar.



#include<stdio.h>    //Aşağıdaki yapılacak işlemler için gerekli kodları kullanmak için çağırılan kütüphanelerdir.
#include<conio.h>
 


void main()
{
        int sayi;
        int sayi1=0, sayi2=0, sayi3=0;                       // İlk önce 0(sıfır)'a eşitliyoruz.Böylelikle onlara ilk değer atamış oluyoruz. Daha sonraki değerler geldikçe sayının değeri değişir.
        int binlik=0, yuzluk=0, onluk=0, birlik=0;
        int basamak=0;


        printf("\n\tBasamaklarini cozumlemek istediginiz sayiyi giriniz: ");  //Çözümleme yapılacak sayının istenen bölümdür.
        scanf_s("%d", &sayi);
        printf("\n\t\tGirdiginiz sayi==>");

        
            //Bu kısımda kullanıcı tarafından girilen sayının kaç basamaklı olduğunu bulmak için if yapısı kullnılmıştır.
        
        
        
        if(sayi>=1000 && sayi<=9999)    //Bu değer aralığı içinde ise 4 basamaklıdır.

        {
                
                binlik=sayi/1000;   //Sayı 1000 bölündüğünde bölüm binlik olarak ekrana yazılır.
                sayi1=sayi%1000;    //Bölümden kalan ise başka sayiya aktarılarak işlem devamlılığı sağlanır.
                basamak++;
                printf("\n\n\tBinlik:%d", binlik);
                yuzluk=sayi1/100;  //Bu arada yeni sayı(sayi1) ile yüzlük kısım bulunur ve ekrana yazdırılır. Bu basamaklar bitine kadar devam eder.
                sayi2=sayi1%100;
                basamak++;
                printf("\n\n\tYuzluk:%d",yuzluk);
                onluk=sayi2/10;
                sayi3=sayi2%10;
                basamak++;
                printf("\n\n\tOnluk:%d", onluk);
                birlik=sayi3;
                printf("\n\n\tBirlik:%d",birlik);
                printf("\n\n\tGirdiginiz sayi 4 basamaklidir.. ");


        }
        else if(sayi>=100 && sayi<=999)  //Bu değer aralığında ise 3 basamaklıdır ve yukarıdaki açıklamalar gibi aynı işlemler 100den başlayarak burada da yapılır.

        {
                yuzluk=sayi/100;
                sayi1=sayi%100;
                basamak++;
                printf("\n\n\tYuzluk:%d",yuzluk);
                onluk=sayi1/10;
                sayi2=sayi1%10;
                basamak++;
                printf("\n\n\tOnluk:%d",onluk);
                birlik=sayi2;
                printf("\n\n\tBirlik:%d",birlik);
                printf("\n\n\tGiridiginiz sayi 3 basamaklidir..");
                
                
        }
        else if(sayi>=10 && sayi<=99)   //Bu değer aralığında ise 2 basamaklıdır ve yukarıdaki açıklamalar gibi aynı işlemler 10den başlayarak burada da yapılır.

        {
                onluk=sayi/10;
                sayi1=sayi%10;
                basamak++;
                printf("\n\n\tOnluk:%d",onluk);
                birlik=sayi1;
                printf("\n\n\tBirlik:%d",birlik);
                printf("\n\n\tGiridiginiz sayi 2 basamaklidir..");

        }
        else if(sayi>=1 && sayi<=9)  //Bu değer aralığında ise 1 basamaklıdır ve çözümlenecek başka basamak olmadığı için hiçbir işlem yapılmaksınız sayı birlik değerine aktarılır.

        {
                birlik=sayi;
                printf("\n\n\tBirlik:%d",birlik);
                printf("\n\n\tGiridiginiz sayi 1 basamaklidir..");
        }
        else if (sayi<=0)
        {
                printf("\n\n\tGirdiginiz sayi 0(sifir)'dan buyuk olmalidir.");
        }
        

_getch();
}
