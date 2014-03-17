//Gulsah Onaran
//contac me for anything questions
//facebook.com/gulsah.onaran
//twitter.com/gulsh_
//Visual Studio 2010 ile hazırlanmıştır.
 
//C programlama dili kullanılmıştır.
//ATM sistemi
//Kullanıcı, "Kullanıcı adı" ve "Şifre" girişi yapmadan işlem yapamaz.
//Kullanıcı, sadece kendi hesabındaki para miktarını görebilir.
//Kullanıcı; para çekebilir, para yatırabilir ve başka hesaba para transferi yapabilir. 
//Kullanıcı çıkmak istediğinde sistemi kapatabilir.
//Bir devamlılığı yoktur. Yapılan işlemden sonra program kapanır.


#include<stdio.h>//Aşağıdaki yapılacak işlemler için gerekli kodları kullanmak için çağırılan kütüphaneler
#include<conio.h>
#include<string.h>



int main()
{

  char kullaniciAdi='g';//Sisteme kayıtlı kullanıcı adı(char çok uzun karakter tanımlamaya imkan tanımadığı için tek karakter tanıtılmıştır.)
        char kullaniciAdi1;//Kişiden istenen kullanıcı adı
        int sifre=4567;//Sisteme kayıtlı şifre
        int sifre1;//Kişiden istenen şifre
        int bakiye=3000;//Kullanıcının bankadaki hesap bakiyesidir.
        int cekmeMiktari;
        int yatirmaMiktari;
        int havaleMiktari;
        int hesap;//Para havalesinin yapılacağı diğer hesapdır.
        int kalan;//Yapılan işlemlerden sonra kalan bakiyesidir.
        int islem;//"switch-case" kontrol yapısı için tanımlanan değişkendir. 

        printf("\nLutfen Kullanici Adinizi Giriniz:");//Kullanıcıdan karşılaştırılma yapılabilmesi için istenen kullanıcı adıdır.
        scanf_s("%c",&kullaniciAdi1,1);
        printf("\nLutfen Sifrenizi Giriniz:");//Kullanıcıdan karşılaştırılma yapılabilmesi için istenen şifredir. 
        scanf_s("%d",&sifre1);

	if(kullaniciAdi==kullaniciAdi1  &&  sifre==sifre1)// Girilen kullanıcı adının ve şifrenin doğruluğunun kontrol edildiği bölümdür.Eğer doğruysa altındaki işlemleri yapar, değilse diğer if koşuluna geçer.
        {

          //Doğrulama yapıldıkdan sonra ekrana gelen işlem menüsüdür.
                  printf("\n\t\t\tHosgeldiniz Gulsah Hanim");
                  printf("\n\n");
                  printf("\t\t========================================\n");//Bu kısım direk ekrana yazdırılır hiç bir işlem yapmaz sadece ekrandaki görüntünün düzgün olması için yazdırılır.
                  printf("\n\n\t1-Hesap Bakiyesi");
                  printf("\n\n\t2-Para Cekme");
                  printf("\n\n\t3-Para Yatirma");
                  printf("\n\n\t4-Havale");
                  printf("\n\n\t5-Cikis");
                  printf("\n\n\tLutfen Yapmak Istediginiz Islemin Numarasini Giriniz:");
                  scanf_s("%d", &islem);
                        
          switch(islem)// Yukarıdaki yazılan menüden seçilen işlemleri yaptırmak için yazılan kontrol yapısıdır.
          {
           case 1:
              printf("\t\t========================================\n");
              printf("\n\n\tMevcut Bakiyeniz: %d TL\n", bakiye);
              break;

           case 2://Hesaptaki bakiyenin üstünün çekilmesi mümkün olmadığı için "if-else" kontrol yapısı kullanılmıştır
           {
                  printf("\t\t========================================\n");
                  printf("\n\tCekmek Istedigini miktar:");
                  scanf_s("%d", &cekmeMiktari);
                  if(cekmeMiktari <= bakiye)
                  {
                       kalan=bakiye-cekmeMiktari;
                       printf("\n\n\tIsleminiz gerceklestrilmistir..\n\tKalan Bakiyeniz:%d TL\n",kalan);
                       }
                  else
                  {
                       printf("\n\tYeterli Bakiye Bulunmamaktadir.");
                  }    
                  break;
           }
                                        
                  
           case 3:
           {
                 printf("\t\t========================================\n");
                 printf("\n\tYatirmak Istediginiz miktar:");
                 scanf_s("%d", &yatirmaMiktari);
                 kalan=bakiye+yatirmaMiktari;
                 printf("\n\n\tIsleminiz gerceklestrilmistir..\n\t \tYeni Bakiyeniz:%d TL\n",kalan);
                 break;
          }
          case 4:
          {
                 printf("\t\t========================================\n");
                 printf("\n\t\tHavale Etmek Istediginiz Hesap Numarasi:");
                 scanf_s("%d", &hesap);
                 printf("\n\t\tHavale Etmek Istediginiz miktar:");
                 scanf_s("%d", &havaleMiktari);
                 if(havaleMiktari<=bakiye)
                 {
                       kalan=bakiye-havaleMiktari;
                       printf("\n\t\tIstediginiz Tutar, %d Numarali Hesaba Aktarilmistir.\n", hesap);
                       printf("\n\n\tIsleminiz gerceklestrilmistir..\n\tKalan Bakiyeniz:%d TL\n",kalan);
                                        
                 }
                 else
                 {
                       printf("\n\t\tYeterli Bakiye Bulunmamaktadir.");
                 }
                 break;

          }
                        
          case 5:
                printf("\t\t========================================\n");
                printf("\n\n\t\tBizi Sectiginiz Icin Tesekkurler..");
                break;
                        

          default:
               printf("\t\t========================================\n");
               printf("\n\t\t\tYanlis Islem Tusladiniz...\n\n\n\n");// Menude belirtilen işlemler dışında bir işlem seçildiğinde ekrana gelicek uyarı yazısıdır.
               break;
            
      }
  }
      else if(kullaniciAdi!=kullaniciAdi1        ||        sifre!=sifre1)// Girilen kullanıcı adının veya sifrenin hatali olması durumunda ekrana yazılacak çıktıdır.
      {
           printf("Kullanici adiniz veya sifreniz yanlis.\nLutfen tekrar deneyiniz...\n");
      }
        _getch();        
}
