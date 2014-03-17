#include<stdio.h>
#include<stdlib.h>

void asalSayiyaTamamla(int *);
bool isPrime(int *);

int main()
{
	int *sayiPtr;
	int sayiVariable;


	printf("Tam sayi giriniz :..................... ");
	scanf_s("%d", &sayiVariable);
	sayiPtr = &sayiVariable;
	asalSayiyaTamamla(sayiPtr);
	printf("Sayinin tamamlanan asal sayisi:........ %d\n", *sayiPtr);

	return 1;
}

void asalSayiyaTamamla(int *sayiPtr)
{
	while (true)
	{
		++*sayiPtr;
		if (isPrime(sayiPtr) == true)
			break;
	}
}
bool isPrime(int *sayiPtr)
{
	for (int i = 2; i < *sayiPtr / 2; i++)
	{
		if (*sayiPtr % i == 0)
			return false;
	}
	return true;
}
