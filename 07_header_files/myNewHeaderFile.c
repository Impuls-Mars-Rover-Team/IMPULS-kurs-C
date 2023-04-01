#include "myNewHeaderFile.h"
#include <stdio.h>

/* Tutaj dodajemy definicje funkcji globalnych, zmienne, funkcje i #define lokalne */

void funkcjaLokalna(void){
    printf("Tak dziala funkcja lokalna\r\n");
}

void funkcjaGlobalna(void){

    printf("Tak dziala funkcja globalna\r\n");
    funkcjaLokalna();

}



