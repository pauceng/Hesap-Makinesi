#include <stdio.h>
#include <conio.h>

void main()
{
                      input();
}

void input()
{
                      int birinci,ikinci;
                      scanf("%d%d", &birinci,&ikinci);
                      cikarma(birinci,ikinci);
}

void cikarma(int sayi1, int sayi2)
{   int cikar;     
                      cikar = sayi1 - sayi2; 
                      printf("Sonuc = %d\n",cikar);   
} 
