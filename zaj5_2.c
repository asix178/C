/*Napisac program wczytujacy nazwe pliku(plik musi istniec)
i tworzacy na dysku nowe pliki zawierajace po n bajtow z pliku oryginalnego,
nazwy tych plikow maja byc takie same jak plik oryginalny z dopisanym .numer_kolejny*/

#include<stdlib.h>
#include<stdio.h>

int main()
{
char adres[255];
printf("Podaj adres pliku \n");
gets(adres);
FILE *f;
f=fopen(adres,"r");
if(f==NULL)
{
    printf("Plik nie istnieje");
    return 1;
}
int n;
printf("Podaj rozmiar czesci w bajtach: ");
scanf("%d",&n);
char numer[20];
char plik[100];
int k=0;
int flag=0;
char z;
while(1)
{
    k++;

    strcpy(plik, adres);
    strcat(plik,".");
    itoa(k,numer,10);
    strcat(plik,numer);
    strcat(plik,".txt");
    FILE*f2;
    f2=fopen(plik,"w");

    for(int i=1;i<=n;i++)
    {
        fscanf(f,"%c",&z);
        if(feof(f))
        {
            flag=1;
            break;
        }
        fprintf(f2,"%c",z);
    }
    printf("koniec pliku \n");

    if(flag==1)
    {
        break;
    }
}


return 0;
}
