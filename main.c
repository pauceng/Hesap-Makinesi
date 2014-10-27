#include<stdio.h>
#include<conio.h>

int EBOB(int sayi1,int sayi2)
{
	int kucuk,ebob,i;

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
	return ebob;
}

int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);

	printf("EBOB(%d,%d)=%d",a,b,EBOB(a,b));


getch();
}