#include <stdio.h>

void main()
{
	int sayilar[3];
	sayilar[0] = 3;
	sayilar[1] = 6;
	sayilar[2] = 9;
	printf("SONUC: %d",ekok(sayilar));
}

int ekok(int sayilar[])
{
	int a = sayilar[0], i,b,s = sizeof(sayilar)/sizeof(a);
	for(i=0; i<s; i++)
	{
		if(sayilar[i]<a)
		{
			a = sayilar[i];
		}
	}
	for(i=2; i<(a+1); i++)
	{
		for(b=0; b<s; b++)
		{
			if(sayilar[b] % i == 0)
			{
				if(b == s - 1)
				{
					return i;
				}
			}
			else
			{
				break;
			}
		}
	}
}
