//Test tablic
/*
    IMPULS kurs elektroniki
    Część 1
    Wstęp do programowania w języku C 

    Tablice (arrays) - służą do przechowywania wielu (najleiej powiązanych ze sobą) wartości tego samego typu
    deklaracja tablicy:

    typ nazwaTablicy[iloscElementow];
    np:
    int arrayTest
*/
#include <stdio.h>

/* Deklaracja tablicy:
 *   typZmiennych nazwaTablicy[iloscElementow_w_tablicy];
 * Np. poniższy przykład deklaruje 5-elementową tablicę 
 * o wartościach typu double o nazwie firstArray.
 */
double firstArray[5];

/* Jeśli chcemy zainicjalizować tablicę jakimiś domyślnymi wartościami,
 * możemy to zrobić podając odpowiednie wartości w nawiasach klamrowych 
 * po znaku '='
*/

int secondArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

/* Przykłady tablic różnych typów: */
int arrayOfIntegers[5];
float arrayOfFloats[5];
double arrayOfDoubles[5];
char arrayOfChars[5];
/* Jeśli przy deklaracji od razu definiujemy elementy tablicy, możemy nie podawać rozmiaru 
   i kompilator prawdopodbnie ogarnie ile elementow ma tablica.
   Jeśli chcemy mieć większą kontrolę nad pamięcią - lepiej wiedzieć ile co zajmuje żeby uniknąć błędów*/
char string[] = "Hello kursant!\r\n";


int main(void){
    /* Aby dostać się do odpowiedniego (n) elementu tablicy, używamy składni:
     *   nazwaTablicy[n]
     * Działa to zarówno w przypadku odczytu jak i zapisu wartości.
     * n to indeks elementu tablicy
     * 
     * Numeracja elementów tablicy zaczyna się od 0, więc pierwszy element zawsze ma indeks 0
     * Ostatni element ma indeks o 1 mniejszy niż liczba elementów tablicy.
     * Zatem jeśli firstArray ma 5 elementów:
     *   Pierwszy element to firstArray[0]
     *   ostatni  element to firstArray[4]
     * Poniżej odczyt w funkcji printf:
     * */
    printf("Przed zapisaniem wartosci do tablicy firstArray\r\n");
    printf("firstArray[0]:\t%lf\r\n", firstArray[0]);
    printf("firstArray[1]:\t%lf\r\n", firstArray[1]);
    printf("firstArray[2]:\t%lf\r\n", firstArray[2]);
    printf("firstArray[3]:\t%lf\r\n", firstArray[3]);
    printf("firstArray[4]:\t%lf\r\n", firstArray[4]);

    /* Zapis wartości do tablicy "po jednym elemencie" */
    firstArray[0] = 0.01;
    firstArray[1] = 1.11;
    firstArray[2] = 2.22;
    firstArray[3] = 3.33;
    firstArray[4] = 4.44;
    printf("\nPo zapelnieniu tablicy firstArray:\r\n");
    printf("firstArray[0]:\t%lf\r\n", firstArray[0]);
    printf("firstArray[1]:\t%lf\r\n", firstArray[1]);
    printf("firstArray[2]:\t%lf\r\n", firstArray[2]);
    printf("firstArray[3]:\t%lf\r\n", firstArray[3]);
    printf("firstArray[4]:\t%lf\r\n", firstArray[4]);

    /* Odczyt elementow z tablicy secondArray */
    printf("\nTablica secondArray:\r\n");
    printf("secondArray[0]:\t%d\r\n",secondArray[0]);
    printf("secondArray[1]:\t%d\r\n",secondArray[1]);
    printf("secondArray[2]:\t%d\r\n",secondArray[2]);
    printf("secondArray[3]:\t%d\r\n",secondArray[3]);
    printf("secondArray[4]:\t%d\r\n",secondArray[4]);
    printf("secondArray[5]:\t%d\r\n",secondArray[5]);
    printf("secondArray[6]:\t%d\r\n",secondArray[6]);
    printf("secondArray[7]:\t%d\r\n",secondArray[7]);
    printf("secondArray[8]:\t%d\r\n",secondArray[8]);
    printf("secondArray[9]:\t%d\r\n",secondArray[9]);

    /* Tablicę czarów wywołujemy w printf ze znakiem specjalnym '\s' (string) */
    printf("\n\nTablica czarow:\r\n%s\r\n", string);

    return 0;   
}