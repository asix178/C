/*Napisac program wczytujacy nazwe pliku(plik musi istniec)
i tworzacy na dysku nowe pliki zawierajace po n bajtow z pliku oryginalnego,
nazwy tych plikow maja byc takie same jak plik oryginalny z dopisanym .numer_kolejny*/
#include<stdio.h>
int main()
{
int n;
char numer[20];
char plik[80];
char plik2[100];
printf("Podaj nazwe pliku do podzialu: ");
gets(plik);
FILE *p;
p=fopen(plik,"r");
if(p==NULL)
{
    printf("Plik nie istnieje");
    return 1;
}
printf("Podaj rozmiar czesci w bajtach: ");
scanf("%d",&n);
char z;
int k=0;
int flag=0;
while(1)
{
    k++;
    strcpy(plik2,plik);
    strcat(plik2,".");
    itoa(k,numer,10);
    strcat(plik2,numer);
    strcat(plik2,".txt");
    FILE*p2;
    p2=fopen(plik2,"w");
    for(int i=1;i<=n;i++)
    {
        fscanf(p,"%c",&z);
        if(feof(p))
        {
            flag=1;
            break;
        }
        fprintf(p2,"%c",z);
    }
    if(flag==1)
    {
        break;
    }
}

return 0;
}
