//Funkcja zamieniajaca wartosc a na wartosc b
#include<stdlib.h>
#include<stdio.h>
void Zamien(int *c, int*d);
int main()
{
int a,b;
printf("Podaj liczbe a: ");
scanf("%d",&a);
printf("Podaj liczbe b: ");
scanf("%d",&b);
printf("a=%d, b=%d \n", a,b);
printf("Zamieniam \n");
Zamien(&a,&b);
printf("a= %d, b=%d ", a,b);
return 0;
}
void Zamien(int *c, int*d)
{
int temp=*c;
*c=*d;
*d=temp;
}
