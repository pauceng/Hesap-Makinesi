#include "stdio.h"
#include <conio.h>
#include <math.h>
void log();
void input();
void log()
{
	float x;
	double sonuc;
	sonuc=log(x);
	printf("Logaritma %f = %f",x,sonuc);
}
void input()
{
	printf("Logaritmasini istedigin sayi?...: ");
	scanf("%f",&x);
}
int main() {
	log();
	input();
	return 0;
}
