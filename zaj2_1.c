//napisz program pobierajacy od uzytkownika 10 liczb i wypisujacy je w odwrotnej kolejnosci
#include<stdio.h>
#include<stdlib.h>

int main()
{
int tab[10];
for (int i=0;i<10;i++)
{
    printf("Podaj %d liczbe: ", i+1);
    scanf("%d",&tab[i]);///AMPERSANT
}
printf("Twoje liczby w odwrotnej kolejnosci to: ");
for (int j=9; j>=0;j--)
{
    printf("%d ", tab[j]);
}

return 0;
}
