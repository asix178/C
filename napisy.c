/* Napisac program wczytujacy napisy (max 80 znakow) az do podania napisu koniec i zapisujacy je do pliku o nazwie teksty.txt*/
#include<stdio.h>
#include<string.h>
int main()
{
FILE *teksty;
teksty = fopen("D:\\00_users_data\\Student_PL\\Pulpit\\teksty.txt","w");
if (teksty==NULL)
{
    printf("Blad");
    return 1;
}
printf("Podaj teksty: -koniec aby zakonczyc \n");
char nap[80];
while(1)
{
gets(nap);
if(strcmp(nap,"koniec")==0)
{
    break;
}
fprintf(teksty,"%s \n",nap);
}
return 0;
}
