/* Dany jest plik z losowymi liczbami calkowitymi, wczytac liczby do pamieci uzywajac dynamicznej struktury danych
(listy z dowiazaniami) sprawdzic czy na liscie nie ma duplikatow i jezeli sa usunac je, posortowac dane na otrzymanej liscie*/
#include<stdio.h>
#include<string.h>
struct wezel
{
    int liczba;
    struct wezel* nast;
};

struct wezel* head = NULL;

struct wezel*dodaj_na_koniec(struct wezel* head, int x)
{
    if(head==NULL)
    {
        head = (struct wezel*)malloc(sizeof(struct wezel));
        head->dane = x;
        head->nast=NULL;
    }
    else
    {
        struct wezel* nowy;
        nowy=(struct wezel*)malloc(sizeof(struct wezel));
        nowy->dane=x;
        head->nast=nowy;
        head=nowy;
    }
    return head;
};

void usun_powtorzenia(struct wezel* head)
{
    Wezel* aktualny = head;
    while (aktualny != NULL) {
        Node* biegacz = aktualny;
        while (biegacz->nast != NULL) {
            if (biegacz->nast->data == aktualny->data) {
                wezel* duplikat = biegacz->nast;
                biegacz->nast = biegacz->nast->nast;
                free(duplikat);
            } else {
                biegacz = biegacz->nast;
            }
        }
        aktualny = aktualny->nast;
    }
}

// Funkcja do sortowania listy (u¿ywaj¹c sortowania przez wstawianie)
void sortList(wezel* head) {
    wezel* listasort = NULL;
    wezel* aktualny = head;

    while (aktualny != NULL) {
        wezel* nastepny = aktualny->next;

        if (listasort == NULL || nastepny->data < listasort->data) {
            current->next = sortedList;
            sortedList = current;
        } else {
            Node* search = sortedList;
            while (search->next != NULL && current->data > search->next->data) {
                search = search->next;
            }
            current->next = search->next;
            search->next = current;
        }

        current = nextNode;
    }

    head = sortedList;
}

// Funkcja do wyœwietlania zawartoœci listy
void displayList(Node head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Funkcja g³ówna
int main() {
    Node* head = NULL;
    FILE* file = fopen("liczby.txt", "r"); // Przyjmujemy, ¿e liczby znajduj¹ siê w pliku "liczby.txt"

    if (file == NULL) {
        printf("Nie mo¿na otworzyæ pliku.\n");
        return 0;
    }

    int number;
    while (fscanf(file, "%d", &number) == 1) {
        insertNode(&head, number);
    }

    fclose(file);

    printf("Lista przed usuniêciem duplikatów:\n");
    displayList(head);

    removeDuplicates(head);

    printf("Lista po usuniêciu duplikatów:\n");
    displayList(head);

    sortList(&head);

    printf("Posortowana lista:\n");
    display
