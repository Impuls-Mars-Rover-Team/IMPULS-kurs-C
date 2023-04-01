/*
 * IMPULS kurs C
 * Wlasne typy zmiennych
 * @gwitkowski2000 2023
 */

/* Jesli mamy taką potrzebę, nie podoba nam się pisanie struct nazwaStruktury Struktura przy tworzeniu struktur albo 
 * chcemy ztworzyć własny typ zwracający np, kod błędu, możemy stworzyć własne typy, używając instrukcji typedef 
 *
 * Składnia:
   
typedef oryginalnaNazwaTypu nowaNazwaTypu;
 
 */

#include <stdio.h>

int zmienna = 99;

typedef int liczbaCalkowita;

liczbaCalkowita zmiennaTypuLiczbaCalkowita = 123;

typedef struct osoba{
    char imie[20];
    char nazwisko[20];
    int wiek;
    float wzrostM;
} osoba_t;

osoba_t prowadzacy = {
    .imie = "Grzegorz",
    .nazwisko = "Witkowski",
    .wiek = 23,
    .wzrostM = 10.5,
};

osoba_t andrzejDuda = {
    .imie = "Andrzej",
    .nazwisko = "Duda",
    .wiek = 50,
    .wzrostM = 1.82,
};

typedef enum bool{boolFalse = 0, boolTrue} bool_t;

void wypiszInformacje_o_osobie(osoba_t osoba_input){
    printf("Imie osoby: \t\t%s\r\n", osoba_input.imie);
    printf("Nazwisko osoby: \t%s\r\n", osoba_input.nazwisko);
    printf("Wiek osoby: \t\t%d\r\n", osoba_input.wiek);
    printf("Wzrost osoby: \t\t%.2fm\r\n", osoba_input.wzrostM);
}

bool_t condition = boolFalse;

bool_t checkIfGreaterThan10(int number){
    if(number > 10){
        return boolTrue;
    }else return boolFalse;
}



int main(void){

    printf("%d\r\n", zmienna);
    printf("%d\r\n", zmiennaTypuLiczbaCalkowita);

    if(condition == boolTrue){
        printf("condition = boolTrue\r\n");
        wypiszInformacje_o_osobie(prowadzacy);
        printf("***************************************\r\n");
        wypiszInformacje_o_osobie(andrzejDuda);
    } else if(condition == boolFalse){
        printf("Nic nie wypisalem, bo condition = boolFalse\r\n");
    }


    printf("Druga proba\r\n");
    condition = boolTrue;
    if(condition == boolTrue){
        printf("condition = boolTrue\r\n");
        wypiszInformacje_o_osobie(prowadzacy);
        printf("***************************************\r\n");
        wypiszInformacje_o_osobie(andrzejDuda);
    } else if(condition == boolFalse){
        printf("Nic nie wypisalem, bo condition = boolFalse\r\n");
    }


    printf("\n\n");

    int boolFunctionCheck = 16;
    if(checkIfGreaterThan10(boolFunctionCheck) == boolTrue){
        printf("Returned boolTrue\r\n");
    }else printf("Returned boolFalse\r\n");

    return 0;
}
