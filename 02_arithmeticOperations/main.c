#include <stdio.h>

int integerVariable = 9;
float floatVariable = 3.14;
double doubleVariable = 3.98;
char charVariable = 'a';


int main(void){

    int sum = integerVariable + 10;
    int diff = sum - 12;
    int multiply = integerVariable * 2;
    int division = multiply / 6;

    int modulo = 10 % 2;

    int hex = 0x0f;
    int orHexNumber2 = 0xf0;
    int orHex = hex | orHexNumber2;


    int hex1 = 0b10101010;
    int hex2 = 0b00001111;
    int andHex = hex1 & hex2;

    int binaryValue = 0b00001000;
    int shiftLeft = binaryValue << 4;
    int shiftRight = binaryValue >> 3;



    printf("Oryginalna liczba 1: %d\r\n", binaryValue);
    printf("Przesuniecie w lewo: %d\r", shiftLeft);
    printf("Przesuniecie w prawo: %d", shiftRight);
    


    return 0;   
}