//Program ktory wczytuje specyfikacje pliku i pisze czy dany plik istnieje
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
FILE*x;
char adres[255];
printf("Podaj sciezke dostepu do pliku");
gets(adres);
x=fopen(adres, "r");
if(x==NULL)
{
    printf("Plik nie istnieje");
}
else
{
    printf("Plik istnieje");
}
return 0;
}
