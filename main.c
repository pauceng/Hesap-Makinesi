int topla(int a, int b);
int main()
{
    input();
    int c = topla(sayi1,sayi2);
	printf("%d",c);
	return 0;
}
void input() 
{
	int sayi1=0;
	int sayi2=0;
	printf("ilk sayiyi giriniz: ", sayi1);	
	scanf("%d", &sayi1);

	printf("ikinci sayiyi giriniz: ", sayi2);
	scanf("%d", &sayi2);
}
int topla(int a, int b) {
return a+b;
}
