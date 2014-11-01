#include <stdio.h>
#include <conio.h>

int a = 0, b = 0;

int xUssuY(int a, int b)
{
	int sonuc = a;
	for (int i = 1; i<b; i++)
	{
		sonuc = sonuc*a;
	}

	return sonuc;
}
void input()
{
	
	printf("Kuvveti alinacak sayiyi giriniz:");
	scanf_s("%d", &a);
	printf("Kacinci kuvveti olacagini giriniz:");
	scanf_s("%d", &b);

}

void main()
{
	input();
	printf("%d uzeri %d ==> %d",a,b,xUssuY(a, b));

	_getch();
}
