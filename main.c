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
	
}
void FaktHesap()
{
	int i, a, fakt;
	fakt = 1;
	printf("Faktoriyeli alinacak sayiyi giriniz = ");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
		{
		fakt = fakt *i;
		}
	printf("%d! = %d", a ,fakt);
}
