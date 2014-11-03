#include <stdio.h>
#include <stdlib.h>

void ekok(int sayilar[]);
void input();

int main()
{
    input();
	return 0;
}

void input()
{
	int a = 0, *array,*temp,b,i;
	durak:
	array = (int*) malloc(2*sizeof(int));
	printf("Kac sayinin EKOK\'unu almak istiyorsunuz?\n");
	scanf("%d",&b);
	temp = (int*) realloc(array,b*sizeof(int));
	if(temp != NULL)
	{
		array = temp;
	}
	else
	{
		free(array);
		printf("Hata.\n");
		goto durak;
	}
	for(i=0; i<b; i++)
	{
		while(a <= 0)
		{
			printf("\n%d. sayiyi girin:\n",i+1);
			scanf("%d",&a);
		}
		array[i] = a;
		a = 0;
	}
	ekok(array);
	free(array);
}

void ekok(int sayilar[])
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
					printf("Sonuc: %d",i);
					return;
				}
			}
			else
			{
				break;
			}
		}
	}
}
