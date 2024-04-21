//program wczytujacy l.calkowite tak dlugo az wypiszemy 0 i wypisujacy najmniejsza z nich
#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,najm;
printf("Podaj liczbe 0-koniec: ");
scanf("%d",&a);
najm=a;
if (a==0)
{
    return 0;
}
else
{
    while(a!=0)
    {
        printf("Podaj liczbe 0-koniec: ");
        scanf("%d",&a);
        if(a<najm && a!=0)
        {
            najm=a;
        }
    }
    printf("Najmniejsza liczba podana to: %d",najm);
}


return 0;
}
