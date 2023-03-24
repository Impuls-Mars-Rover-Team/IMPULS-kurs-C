/*
 * IMPULS kurs C - zmienne, typy i operacje
 * Typy zmiennych i operacje matematyczne 
 * @gwitkowski2000 2023
 */
#include <stdio.h>

/* 
 * znaki specjalne do łańcuchów znaków / printf:
 * \r - powrot na poczatek wiersza
 * \n - przejscie do nowej linii
 * \t - tabulator
 */

/* ------------------------------------- Najpopularniejsze typy zmiennych w języku C ------------------------------------*/

int integerVariable = 9;                /* int - integer, liczby całkowite parametr do printf: %d */

float floatVariable = 3.141592;         /* float - floating point - liczby zmiennoprzecinkow (ułamki). 
                                            Dokładność do 6 cyfr po przecinku. 
                                            Parametr do printf: %f (%.nf) dla dokładności n liczb po przecinku */

double doubleVariable = 3.14159265359;  /*  double - double precision floating point. Liczby zmiennoprzecinkowe
                                            o podwójnej precyzji - do 15 miejsc po przecinku */

char charVariable = 'a';                /*  char - character - znaki */

/*-------------------------------------------Operacje na zmiennych----------------------------------------------------*/
/*
 * inkrementacja (zwiekszenie o 1)  x++ 
 * dekrementacja (zmniejszenie o 1) x--
 * dodawanie -                      z = x + y
 * odejmowanie -                    z = x - y
 * mnozenie -                       z = x * y
 * dzielenie -                      z = x / y
 * modulo (reszta z dzielenia) -    z = x % y
 * 
 * OR (suma logiczna)               z = x | y
 * AND (iloczyn logiczny)           z = x & y
 * negacja bitowa                   z = ~x
 * Przesuniecie bitowe w lewo o n   z = x << n
 * Przesuniecie bitowe w prawo o n  z = x >> n
 * 
 */

 

int main(void){

    for(int i = 0; i < 50; i++) printf("*");
    printf("\r\n");
    printf("Typy zmiennych:\r\n");
    printf("int:\t%d\r\n", integerVariable);
    printf("float:\t%.6f\r\n", floatVariable);
    printf("double:\t%.15f\r\n", doubleVariable);
    printf("char:\t%c\r\n", charVariable);
    for(int i = 0; i < 50; i++) printf("*");
    printf("\r\n");

    printf("Operacje matematyczne\r\n");
    int x = 3;
    int y = 4;
    printf("x = %d\ty = %d\r\n", x, y);

    int increment = x;
    increment++;
    printf("x++ = %d\t\r\n", increment);

    int decrement = x;
    decrement--;
    printf("x-- = %d\t\r\n", decrement);

    int sum = x + y;
    printf("x + y = %d\t\r\n", sum);

    int subtraction = x - y;
    printf("x - y = %d\t\r\n", subtraction);

    int multiplication = x * y;
    printf("x * y = %d\t\r\n", multiplication);

    /*  (float)x - rzutowanie zmiennej x na typ float. Bez tego zmienne 
        i wynik działania zostana potraktowane jako całkowite i wynik wyjdzie inny  */
    float division = (float)x / (float)y;
    printf("x / y = %.2f\t\r\n", division);

    int modulo = y % x;
    printf("x %c y = %d\t\r\n", '%', modulo);

    for(int i = 0; i < 50; i++) printf("*");
    printf("\r\n");
    printf("Operacje 'bitowe'\r\n");
    x = 0b10000001;
    y = 0b00001111;
    printf("x = 0x%x\ty = 0x%.2x\r\n", x, y);

    int OR = x | y;
    printf("x | y = 0x%x\t\r\n", OR);

    int AND = x & y;
    printf("x & y = 0x%.2x\t\r\n", AND);

    /*  na windowsie int jest 32-bitowa, stąd y to tak naprawdę 0x0000000f.
        w STM korzystamy częściej z 8-bitowych uint8_t, 16-bitowych uint_16_t i 32-bitowych uint32_t */
    int NOT = ~y;
    printf("~y = 0x%x\t\r\n", NOT); 

    x = 0x01; 
    y = 0x80;

    printf("\nx = 0x%x\ty = 0x%.2x\r\n", x, y);
    int shiftLeft = x << 4;
    printf("x << 4 = 0x%x\t\r\n", shiftLeft); 
    int shiftRight = y >> 4;
    printf("y >> 4 = 0x%x\t\r\n", shiftRight);

    return 0;   
}