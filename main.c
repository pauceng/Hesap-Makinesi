#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int topla(int a, int b);
int xUssuY(int , int );

int main()
{
    int cikis;
    int sayi1=0;
	int sayi2=0;

	do{
	printf("ilk sayiyi giriniz: ", sayi1);
	scanf("%d", &sayi1);
	printf("ikinci sayiyi giriniz: ", sayi2);
	scanf("%d", &sayi2);

    int c = topla(sayi1,sayi2);
	printf("Iki sayinin toplami : %d",c);
	EBOB();
	printf("%d uzeri %d ==> %d\n\n",sayi1,sayi2,xUssuY(sayi1, sayi2));

	printf("Cikis yapmak için sifir'a(0) basiniz.\n");
	scanf("%d",&cikis);
	}while(cikis != 0);

	return 0;
}

int topla(int a, int b) {
return a+b;
}

void EBOB()
{
	int sayi1,sayi2;
	int kucuk,ebob,i;

	printf("\nI.Sayi:");
	scanf("%d",&sayi1);
	printf("II.Sayi:");
	scanf("%d",&sayi2);

	if(sayi1>sayi2)
	{
		kucuk=sayi1;
	}
	else
	{
		kucuk=sayi2;
	}

	for(i=kucuk;i>=1;i--)
	{
		if((sayi1%i == 0)&&(sayi2%i == 0))
		{
			ebob=i;
			break;
		}
		else
		{
			continue;
		}
	}
	printf("EBOB(%d,%d)=%d\n",sayi1,sayi2,ebob);
}

int xUssuY(int a, int b)
{
	int sonuc = a;
	int i = 1;
	for (i; i<b; i++)
	{
		sonuc = sonuc*a;
	}

	return sonuc;
}
