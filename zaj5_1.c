/* Napisac program wczytujacy napisy (max 80 znakow)
az do podania napisu koniec i zapisujacy je
do pliku o nazwie teksty.txt*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char napis[81];
FILE*f;
f=fopen("C:\\Users\\asia\\Desktop\\teksty.txt","w");
if (f==NULL)
{
    printf("Blad");
    return 1;
}
printf("Podaj tekst, wpisz koniec aby zakonczyc \n");
while(1)
{
    gets(napis);
    if(strcmp("koniec", napis)==0)
    {
        break;
    }
    fprintf(f,"%s \n",napis);
}



return 0;
}
