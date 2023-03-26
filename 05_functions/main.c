/*
 * IMPULS kurs C
 * Funkcje
 * @gwitkowski2000 2023
 */

/*
 * Funkcja to wydzielona część programu, która przetwarza argumenty (dane wejściowe),
 * wykonuje jakieś operacje (najczęściej na argumentach albo zależne od argumentów)
 * i ewentualnie zwraca wartość (najczęściej będącą wynikiem tych operacji).
 * 
 * Składnia:
 * 
 * deklaracja funkcji: **arg - argument
 * typZwracany nazwaFunkcji(typArg1 nazwaArg1, typArgg2, nazwaArgg2, ..., typArgN, nazwaArgN);
 * 
 * definicja funkcji:
 * typZwracany nazwaFunkcji(typArg1 nazwaArg1, typArg2, nazwaArg2, ..., typArgN, nazwaArgN){
 *   //operacje na argumentach - dodawanie, mnożenie, całkowanie, porównywanie itp, np:
 *   int zmiennaPomocnicza = nazwaArg1 + nazwaArg2;
 *   int wynik = zmiennaPomocnicza * nazwaArgN;
 *   
 *   return wynik;   
 * 
 * }
 * 
 * słowo kluczowe return powoduje zwrócenie przez funkcję zmiennej wynik.
 * Zmienna zwracana musi być tego samego typu co typ funkcji
 * 
 * Wywołanie funkcji:
 * typZmiennej nazwaZmiennej = nazwaFunkcji(Argument1, Argument2, ..., ArgumentN);
 * 
 * innaFunkcja(nazwaFunkcj(Argument1, Argument2, ..., ArgumentN));
 * 
 * */

#include <stdio.h>

int sumaDwochLiczbCalkowitych(int liczba1, int liczba2);
void kursPisaniaFunkcjiTypuVoid(void){
    printf("Wynik dodawania 56 i 87 to %d\r\n", sumaDwochLiczbCalkowitych(56, 87));
}

int main(void){
/*
    int zmienna1 = 56;
    int zmienna2 = 87;

    printf("Wynik dodawania:\t%d\r\n", sumaDwochLiczbCalkowitych(zmienna1, zmienna2));
*/

    //void
    kursPisaniaFunkcjiTypuVoid();
    return 0;
}

int sumaDwochLiczbCalkowitych(int liczba1, int liczba2){
    int wynik = liczba1 + liczba2;

    return wynik;
}
