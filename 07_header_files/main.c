/*
 * IMPULS kurs C
 * Pliki nagłówkowe
 * @gwitkowski2000 2023
 */

/*
 * @warning żeby include nowego pliku nagłówkowego zadziałało w Visual Studio Code, trzeba dodać ten plik
            w tasks.json
            albo skompilowac z poziomu terminala: 
            - otworzyć folder z projektem w terminalu (PPM na folder z plikami, open in integrated terminal)
            - wpisać komendę: gcc -Wall main.c myNewHeaderFile.c -o main.exe
            - żeby sprawdzić działanie programu, wpisać ' ./main.exe ' albo */

/* Pliki nagłówkowe mogą służyć do rozbicia dużego programu na mniejsze moduły zawierające konkretne
 * funkcje i zmienne.
 * Utworzone w ten sposób pliki mogą później zostać wykorzystane też w innych programach, 
 * po dołączeniu ich za pomocą dyrektywy #include.
 * 
 * Jeśli dołączamy standardowe pliki nagłówkowe, nazwę pliku nagłówkowego umieszczamy w nawiasach <>,
 * np. #include <stdio.h>
 * 
 * Jeśli dołączamy własne, lokalne pliki nagłówkowe znajdujące się w folderze projektu,
 * nazwę pliku umieszczamy w cudzysłowach "", np #include "myHeaderFile.h"
 * 
 * Pliki z rozszerzeniem .h zawierają deklaracje publicznych (dostępnych w każdym pliku 
 * mającym dostęp do tego pliku .h) zmiennych i funkcji oraz publiczne definicje
 * 
 * Pliki z rozszerzeniem .c zawierają definicje publicznych zmiennych i funkcji
 * oraz lokalne (dostępne tylko w pliku .c) zmienne i funkcje.
 * 
 * 
 * */



#include <stdio.h>
#include <math.h>

#include "myNewHeaderFile.h"
//myNewHeaderFile_zmiennaGlobalna1 = 11;

int main(void){

    funkcjaGlobalna();


    return 0;

}