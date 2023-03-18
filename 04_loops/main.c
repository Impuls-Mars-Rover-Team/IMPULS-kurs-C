#include <stdio.h>

/*
* if    jeśli warunek jest spełniony
 * else jeśli nie jest
 * else if  jeśli nie jest, ale jest spełniony inny
* while dopóki warunke jest spełniony
* for   
* switch
*/


/*
 Operatory porównania - czy:
 x == y x jest równe y
 x != y x nie jest równe

 x > y  x wieksze od y
 x < y  x mniejsze od y
 x >= y x wieksze lub rowne y
 x <= y x mniejsze lub rowne y

 x || y - OR - jeśli x LUB y jest spełniony
 x && y - AND jeśli x I y są spełnione

 !x jeśli x NIE JEST spełniony

 */

int testVariable1 = 0;
int testVariable2 = 900;

int switchedVariable = 10;

int array[10];

int main(void){

    printf("Przed petla\r\n");
    while(testVariable1 < 5){
        testVariable1++;
        printf("testVariable: \t%d\r\n", testVariable1);
    }
    printf("Po petli\r\n");

    for(int i = 0; i < 10; i++){
        printf("array[%d] = %d\r\n", i, array[i]);
    }

    for(int i = 0; i < 10; i++){
        array[i] = i*2;
    }

    printf("\r\n\n********************************\r\n\n");

    for(int i = 0; i < 10; i++){
        printf("array[%d] = %d\r\n", i, array[i]);
    }


    switch(switchedVariable){
        case 0:
            printf("switchedVariable jest rowna zero\r\n");
            testVariable2++;
            break;
        case 1: 
            printf("switchedVariable jest rowna jeden\r\n");
            break;
        case 2:
            printf("switchedVariable jest rowna dwa\r\n");
            break;
        case 3:
            printf("switchedVariable jest rowna trzy\r\n");
            break;
        case 4:
            printf("switchedVariable jest rowna cztery\r\n");
            break;
        case 5:
            printf("switchedVariable jest rowna piec\r\n");
            break;

        default:
            printf("switchedVariable nie jest z zakresu 0-5\r\n");
            break;


        

    }

    return 0;   
}