//funkcja ktora dla 2 tablic napisze ile jest liczb wspolnych w tych tablicach
#include<stdio.h>
#include<stdlib.h>

int ileWspolnych(int tab1[], int r1, int tab2[], int r2);//dwie tablice i ich rozmiary

int main()
{
int r1=3;
printf("Podaj rozmiar 1-szej tablicy: ");
scanf("%d",&r1);
int *tab1;
tab1=(int*)malloc(r1 *sizeof(int));
printf("Podaj liczby do 1-szej tablicy: ");
for (int i=0; i<r1;i++)
{
    scanf("%d",&tab1[i]);
}
int r2;
printf("Podaj rozmiar 2-giej tablicy");
scanf("%d",&r2);
int *tab2;
tab2=(int*)malloc(r1 *sizeof(int));
printf("Podaj liczby do 2-giej tablicy: ");
for (int i=0; i<r2;i++)
{
    scanf("%d",&tab2[i]);
}
printf("Ilosc wspolnych liczb to: %d",ileWspolnych(tab1,r1,tab2,r2));
return 0;
}
int ileWspolnych(int tab1[], int r1, int tab2[], int r2)
{
int wspolne=0;
int r3;
int kolejnosc=0;
if (r2>r1)
{
    r3=r1;
}
else
{
    r3=r2;
}
int tab3[r3];
for (int i=0; i<r1; i++)
{
    for(int j=0; j<r2; j++)
    {
        if (tab1[i]==tab2[j])
        {
            tab3[kolejnosc]=tab1[i];
            kolejnosc ++;
            break;///czemu? wyjscie z wewnetrznego fora
        }
    }
}
for(int i=0; i<r3;i++)
{
    printf("%d", tab3);
}
int tab4[r3];
int ktore_miejsce=0;
tab4[ktore_miejsce]=tab3[0];
ktore_miejsce++;
int flaga;///zamiast boola
for(int i=0;i<kolejnosc; i++)
{
    flaga=1;
    for (int j=0;j<ktore_miejsce;j++)
    {
        if(tab3[kolejnosc]==tab4[ktore_miejsce])
        {
            flaga=0;

        }
    }
    if(flaga)
    {
        tab4[ktore_miejsce]=tab3[kolejnosc];
        ktore_miejsce++;
    }
}
for(int z=0;z<ktore_miejsce;z++) {
    printf("%d ",tab4[z]);
}

wspolne=ktore_miejsce;
return wspolne;
}
