/*
 * IMPULS kurs C - pętle
 * Typy zmiennych i operacje matematyczne 
 * @gwitkowski2000 2023
 */

#include <stdio.h>

/*
* if    jeśli warunek jest spełniony
 * else jeśli nie jest
 * else if  jeśli nie jest, ale jest spełniony inny
* while dopóki warunek jest spełniony
* for - uruchamiana wielokrotnie aż do spełnienia warunku
* switch - sprawdza wiele wariantów
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

/*---------------------------------------if(warunek)-----------------------------------------------
 * if - sprawdza jeden raz czy warunek jest spełniony. może mieć kilka poziomó:
 * if(warunek){
 *   wykonajRzeczy();
 * }
 * Jeśli warunek będzie spełniony, to wykona się funkcja wykonajRzeczy().
 * Jeśli warunek nie będzie spełniony, to program wyjdzie z pętli if i przjedzie dalej.
 * 
 * if(warunek){
 *  wykonajRzeczy();
 * } else {
 *   wykonajInneRzeczy();
 * }
 * Jeśli warunek będzie spełniony, to wykona się funkcja wykonajRzeczy()
 * Jeśli warunek nie będzie spełniony, wykona sie funkcja wykonajInneRzeczy()
 * 
 * if(warunek){
 *   wykonajRzeczy();
 * } else if(innyWarunek){
 *   wykonajInneRzeczy();
 * } else if(jeszczeInnyWarunek){
 *   wykonajJeszczeInneRzeczy();
 * } else{
 *   wykonajJeszczeInneRzeczyKtorychJeszczeNieBylo();
 * }
 *
 * 
 */

/*--------------------------------------while(warunek)---------------------------------------------
 * Pętla wykonuje się dopóki warunek jest spełniony
 * Częstym przykładem jest while(1) - pętla nieskończona
 * Innym przykładowaniem może być sprawdzanie np. czy jakaś funkcja/moduł jest uruchomiona:
 *   while(isInitialized == 0){
 *     initialize();
 *   }
 */ 
 
 /*----------------------for(warunekPoczatkowy; warunekDoSprawdzania; dzialanie)-------------------
  * Ta pętla zazwyczaj uruchamia się określoną ilość razy i przydaje się przede wszystkim do pracy
  * z tablicami, ze względu na wykorzystanie zmiennej iteracyjnej, która może służyć jako indeks
  * tablicy.
  * 
  * for(warunekPoczatkowy; warunekKoncowy; dzialaniePoKazdejIteracji){
  *   operacjeWykonywane_w_Petli();
  * }
  * 
  * zazwyczaj używamy tego np. tak:
  * for(int i = 0; i < 10; i++){
  *     jakasTablica[i] = jakasTablica[i] * 2;
  * }
  * W tym przypadku po każdym mnożeniu i-tego elementu tablicy jakasTablica, zmienna i się zwiększa o 1
  * i w następnej iteracji operacja wykonywana jest na elemencie o indeksie o 1 większym.
  * 
  * for(int i = 10; i > 0; i--){
  *   jakasTablica[i] = jakasTablica[i] * 2;
  * }
  * W tym przypadku po każdym mnożeniu i-tego elementu tablicy jakasTablica, zmienna i się zmniejsza o 1
  * i w następnej iteracji operacja wykonywana jest na elemencie o indeksie o 1 mniejszym.
  *
 */

/*---------------------------------------------switch----------------------------------------------
 * Ta pętla służy do sprawdzania czy dana zmienna ma jakąś zdefiniowaną wartość.
 * Jeśli tak, to wykonywane są operacje związane z tą konkretną wartością.
 * Można dodać też przypadek "domyślny" wykonujący się jeśli 
 * zmienna nie spełnia żadnego z warunków
 * 
 * na końcu każdego bloku case trzeba podać słowo kluczowe break, dzięki czemu pętla nie wykona
 * operacji z nastęonego case
 * 
 * switch(zmienna){
 *   case 1:
 *     wykonajOperacje1();
 *     break;
 *   case 2:
 *     wykonajOperacje2();
 *     break;
 *   case 3:
 *     wykonajOperacje3();
 *     break;
 *   case 4:
 *     wykonajOperacje4();
 *     break;
 *   case 5:
 *     wykonajOperacje5();
 *     break;
 *   
 *   default:
 *     wykonajOperacjeDlaNiezdefiniowanegoWarunku();
 *     break;
 * }
 *
 *
 */


int switchVariable2 = 900;
int whileVariable = 0;
int ifVariable = 4;
int switchVariable = 10;
int array[10];

int main(void){

    if(ifVariable > 4){
        printf("Zmienna ifVariable jest wieksza od 4\r\n");
    }else if(ifVariable < 4){
        printf("Zmienna ifVariable jest mniesza od 4\r\n");
    }else{
        printf("Zmienna ifVariable nie jest ani mniejsza ani wieksza od 4\r\n");
    }

    printf("\r\n\n********************************\r\n\n");



    printf("Przed petla\r\n");
    while(whileVariable < 5){
        whileVariable++;
        printf("whileVariable: \t%d\r\n", whileVariable);
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

    printf("\r\n\n********************************\r\n\n");


    switch(switchVariable){
        case 0:
            printf("switchVariable jest rowna zero\r\n");
            switchVariable2++;
            break;
        case 1: 
            printf("switchVariable jest rowna jeden\r\n");
            break;
        case 2:
            printf("switchVariable jest rowna dwa\r\n");
            break;
        case 3:
            printf("switchVariable jest rowna trzy\r\n");
            break;
        case 4:
            printf("switchVariable jest rowna cztery\r\n");
            break;
        case 5:
            printf("switchVariable jest rowna piec\r\n");
            break;

        default:
            printf("switchVariable nie jest z zakresu 0-5\r\n");
            break;


        

    }

    return 0;   
}