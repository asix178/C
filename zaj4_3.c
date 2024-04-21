//Program ktory wypisuje liczby z pliku
#include<stdio.h>
#include<stdlib.h>

int main()
{
char adres[255];
printf("Podaj adres pliku do odczytania");
gets(adres);
FILE*f;
f=fopen(adres,"r");
if(f==NULL)
{
    printf("Nie ma takiego pliku");
    return 1;
}
int x=0;
while(1)
{
    fscanf(f,"%d",&x);
    if (feof(f)) break;
    printf("%d ",x);
}
fclose(f);
return 0;
}
