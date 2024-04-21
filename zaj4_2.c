//Pobierajacy od uzytkownika liczby calkowite az do podania 0.
//I zapisujacy je do pliku o nazwie liczby.txt
#include<stdlib.h>
#include<stdio.h>

int main()
{
FILE*f;
f=fopen("C:\\Users\\asia\\Desktop\\liczby.txt","w+");
int a=1;
printf("Podaj liczbe do zapisu 0-koniec ");
scanf("%d",&a);
while(a!=0)
{
fprintf(f,"%d",a);
printf("Podaj liczbe do zapisu 0-koniec ");
scanf("%d",&a);
}
fclose(f);
return 0;
}
