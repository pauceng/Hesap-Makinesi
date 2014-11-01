#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int mod(int sayi1, int sayi2);
void input();

int main()
{
	input();
	return 0;
}

void input()
{
	int a, b;
	printf("Modu alinacak sayiyi giriniz:");
	scanf_s("%d", &a);
	printf("Modu giriniz:");
	scanf_s("%d", &b);
	printf("Sonuc:%d\n", mod(a, b));
	getch();

}

int mod(int sayi1, int sayi2)
{
	return sayi1%sayi2;
}