/*
 * IMPULS kurs C 
 * Wskaźniki
 * @gwitkowski2000 2023
 */

/* Wskaźnik to zmienna, która przechowuje adres w pamięci innej zmiennej 
 * Aby zdobyć adres zmiennej używamy operatora wyłuskania / pobrania adresu (reference operator) &
 * np. &zmienna
 * 
 * Aby utworzyć zmienną która jest wskaźnikiem, musimy podać typ na jaki będzie wskazywał wskaźnik
 * Oraz dodać gwiazdkę przed nazwą zmiennej wskaźnikowej, np.
 * 
 * int *wskaznikNaInt = &zmiennaInt;
 * float *wskaznikNaFloat = &zmiennaFloat;
 * double *wskaznikNaDouble = &zmiennaDouble;
 * char *wskaznikNaChar = &zmiennaChar;
 * 
 * Aby wyświetlić wskaźnik przy pomocy funkcji printf lub sprintf, wykorzystujemy znak specjalny %p
 * 
 * Aby zmodyfikować zmienną znajdującą się pod danym wskaźnikiem określonym adresem, używamy składni:
 *   *nazwaWskaźnika = operacjaNaZmiennejPodDanymAdresem();
 * np.:
 *   *wskaznikNaInt = 123;
 * 
 * Gdzie są przydatne wskaźniki (w naszym przypadku)?
 * STM32, STM8 - do zapisu zmiennych i danych w konkretnych sekcjach pamięci - np. SRAM, EEPROM, FLASH
 * 
 *
 * */


#include <stdio.h>

int zmienna = 99;
int *wskaznikNaZmiennaZmienna = &zmienna;

int tablica[5] = {1, 2, 3, 4, 5};

int main(void){
    printf("Adres zmiennej zmienna: %p\r\n", wskaznikNaZmiennaZmienna);

    printf("Zmienna zmienna na poczatku: %d\r\n", zmienna);
    printf("Wartosc pod adresem wskazywanym przez wskaznik: %d\r\n", *wskaznikNaZmiennaZmienna);
    *wskaznikNaZmiennaZmienna += 1;
    printf("Wartosc pod adresem wskazywanym przez wskaznik: %d\r\n", *wskaznikNaZmiennaZmienna);

    printf("Adres zmiennej pod wskaznikiem: %p\r\n", wskaznikNaZmiennaZmienna);
    wskaznikNaZmiennaZmienna += 1;
    printf("Adres zmiennej pod wskaznikiem: %p\r\n", wskaznikNaZmiennaZmienna);

    for(int i = 0; i < 5; i++){
        printf("%d\t", *tablica + i);
    }
    
    return 0;
}

