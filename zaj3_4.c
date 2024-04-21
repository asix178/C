//wczytujacy napis i wypisujacy go na ekranie (80 znakow) i liczy znaki w tablicy oraz odczytuje napis od konca
#include<stdlib.h>
#include<stdio.h>

int main()
{
char tekst[81];
printf("Podaj tekst: \n");
fgets(tekst,81,stdin);
printf("Podales: %s \n",tekst);
int ile=0;
while(tekst[ile]!=0)
{
    ile++;
}
ile--;
printf("Podales %d znakow. \n",ile);
printf("Twoj napis od konca: \n");
for(int i=ile; i>=0; i--)
{
    printf("%c",tekst[i]);
}
return 0;
}
