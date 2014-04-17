#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b, x, y,toplam=0,toplam2=0;

	printf("a+bi sayisi icin;\n\t\t");
	printf("a:");
	scanf_s("%d", &a);
	printf("\t\tb:");
	scanf_s("%d",&b);

	printf("x+yi sayisi icin;\n\t\t");
	printf("x:");
	scanf_s("%d", &x);
	printf("\t\ty:");
	scanf_s("%d", &y);

	toplam = a + x;
	toplam2 = b + y;

	printf("\n\n\t(%d + %di)+(%d + %di) =%d +%di", a, b, x, y, toplam, toplam2);

	_getch();
}
