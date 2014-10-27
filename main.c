#include <stdio.h>
#include <conio.h>

void ekok(int sayilar[])
{
	int a = sayilar[0];
	for(int i=0; i<(sizeof(sayilar) + 1); i++)
	{
		if(i<a)
		{
			a = sayilar[i];
		}
	}
	for(int i=0; i<(sizeof(sayilar) + 1); i++)
	{
		for(; a>0; a--)
		{
			if(sayilar[i] % a == 0)
			{

			}
			else
			{
				continue;
			}
		}
	}
}