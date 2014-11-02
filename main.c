#include<stdio.h>
#include<conio.h>

void EBOB()
{
	int sayi1,sayi2;
	int kucuk,ebob,i;

	printf("I.Sayi:");
	scanf("%d",&sayi1);
	printf("\nII.Sayi:");
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
	printf("\nEBOB(%d,%d)=%d",sayi1,sayi2,ebob);
	printf("\n\nDevam etmek icin herhangi bir tusa basin");
	getch();
}



int main()
{
	

	EBOB();

	
return 0;
}