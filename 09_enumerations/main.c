/*
 * IMPULS kurs C
 * Wyliczenia
 * @gwitkowski2000 2023
 */


/* Wyliczenia służą do przypisywania wartości liczbowej wyrażeniom. 
 * Mogą służyć do definiowania stałych liczbowych i do tworzenia własnych typów
 *
 * Składnia:
 * 
enum nazwaWyliczenia{
    pierwszeWyrazenie = 1,
    drugieWyrazenie,
    trzecieWyrazenie,
};

 * Pierwsze wyrazenie nie musi miec wartosci 1 - przykładowo jesli będzie równe 3,
   wtedy 3 wyrazenie będzie równe 5

 * Można przypisać każdemu wyrażeniu wartość "na sztywno"

 enum nazwaWyliczenia{
    pierwszeWyrazenie = 11,
    drugieWyrazenie = 22,
    trzecieWyrazenie = 33,
};

 */




/*
inne mozliwe rozwiazania

int poniedzialek = 1;
int wtorek = 2;
int sroda = 3;

#define def_poniedzialek 1
#define def_wtorek 2
#define def_sroda 3

*/


#include <stdio.h>

enum dniTygodnia{
    poniedzialek = 1,
    wtorek,
    sroda,
    czwartek,
    piatek,
    sobota,
    niedziela,
};


char nazwyDniTygodnia[8][20] = {
    " ",
    "Poniedzialek",
    "Wtorek",
    "Sroda",
    "Czwartek",
    "Piatek",
    "Sobota",
    "Niedziela"
};

enum bool{false = 0, true};


int main(void){

    if(true){
        printf("%d dzien tygodnia to %s\r\n", poniedzialek, nazwyDniTygodnia[poniedzialek]);
        printf("%d dzien tygodnia to %s\r\n", wtorek, nazwyDniTygodnia[wtorek]);
        printf("%d dzien tygodnia to %s\r\n", sroda, nazwyDniTygodnia[sroda]);
        printf("%d dzien tygodnia to %s\r\n", czwartek, nazwyDniTygodnia[czwartek]);
        printf("%d dzien tygodnia to %s\r\n", piatek, nazwyDniTygodnia[piatek]);
        printf("%d dzien tygodnia to %s\r\n", sobota, nazwyDniTygodnia[sobota]);
        printf("%d dzien tygodnia to %s\r\n", niedziela, nazwyDniTygodnia[niedziela]);
    }


    return 0;
}


