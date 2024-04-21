///Zadeklarowac typ stukturalny reprezentujacy dane osobowe, pesel, nazwisko, imie, dzien ur, miesiac, rok +

///Globalnie zadeklarowac zmienna ktora bedzie taka sturktura +

///napisac funkcje bezparametrowa wczytujaca dane do zmiennej -> wczytaj_osobe +

///napisac fukcje wypisujaca, ta zmienna -> wypisz_osobe+

///main ktory przetestuje, dane wypisuje w jednej linii

///napisac funkcje dopisujaca wczytane dane do pliku dane.dat+

///funkcja przegladajaca zawartosc pliku dane.dat +

///funkcja znajdz po peselu

#include<stdio.h>
#include<stdlib.h>

struct osoba
{
    char pesel[12];
    char nazwisko [30];
    char imie[30];
    int d_ur;
    int m_ur;
    int r_ur;
}os;

void wczytaj()
{
    printf("Podaj pesel: ");
    scanf("%s", os.pesel);
    printf("Podaj Imie: ");
    scanf("%s", os.imie);
    printf("Podaj nazwisko: ");
    scanf("%s", os.nazwisko);
    printf("Podaj dzien urodzenia: ");
    scanf("%d",&os.d_ur);
    printf("Podaj miesiac urodzenia: ");
    scanf("%d",&os.m_ur);
    printf("Podaj rok urodzenia: ");
    scanf("%d",&os.r_ur);
}
///NIE WYPISUJE SIE W JEDNEJ LINII???
void wypisz()
{
    printf("pesel:%s, imie:%s, nazwisko:%s, data urodzenia(DD-MM-RRRR):%d.%d.%d",os.pesel,os.imie,os.nazwisko,os.d_ur,os.m_ur,os.r_ur);
};

void zapisz_do_pliku()
{
    FILE*f;
    f=fopen("C:\\Users\\asia\\Desktop\\dane.dat","w");
    if(f==NULL)
    {
        printf("Plik nie powstal");
        return;
    }
    fwrite(&os,sizeof(struct osoba),1,f);
    fclose(f);

};

void przegladaj()
{
    FILE *f;
    f= fopen("C:\\Users\\asia\\Desktop\\dane.dat","r");
    if(f==NULL)
    {
        printf("Plik nie powstal");
        return;
    }
    while(1)
    {
        fread(&os,sizeof (struct osoba),1,f);
        if(feof(f)) break;
        wypisz();
        printf("\n");
    }
    fclose(f);
};

void znajdz_po_peselu()
{
    char pesel[12];
    printf("Podaj pesel: ");
    scanf("%s", pesel);
    FILE*f;
    f=fopen("C:\\Users\\asia\\Desktop\\dane.dat","r");
    if(f==NULL)
    {
        printf("Blad");
        return;
    }
    printf("Pasujacy pesel: ");
    while(1)
    {
        fread(&os,sizeof(struct osoba),1,f);
        if(feof(f)) break;
        if(strcmp(os.pesel,pesel)==0)
        {
            wypisz();
            printf("\n");
        }

    }
    fclose(f);
};

int main()
{
///wypisuje sie menu 1.dopisanie nowej osoby, 2.przegladanie, 3.wyszukanie po peselu 4.koniec
int wybor;

while(1)
{
  printf("Wybierz: 1.dopisanie nowej osoby, 2.przegladanie, 3.wyszukanie po peselu 4.koniec");
  scanf("%d",&wybor);
  if(wybor==1)
  {
      wczytaj();
      zapisz_do_pliku();
  }
  else if (wybor==2)
  {
      przegladaj();
  }
  else if (wybor==3)
  {
      znajdz_po_peselu();
  }
  else if (wybor==4)
  {
      break;
  }
  else
  {
      printf("Bledna odpowiedz");
  }
}
return 0;
}
