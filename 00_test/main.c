#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

int seconds = 0;
int minutes = 0;
int hours = 0;
int blinkPeriod = 250;

int main(void){

    for(int i = 0; i < 5; i++){
        printf("IMPULS sekcja elektroniki - Kurs programowania w jezyku C\r\n\n");
        Sleep(blinkPeriod);
        system("cls");
        Sleep(blinkPeriod);
    }
    
    while(1){
        system("cls");
        
        if(seconds < 59){
            seconds++;
        }else{
            minutes++;
            seconds = 0;
        }

        if((minutes < 59) && (seconds > 59)){
            minutes++;
        }else if(minutes > 59){
            hours++;
            minutes = 0;
        }

        printf("Time running: \t%dh\t%dmin\t%ds\r\n", hours, minutes, seconds);
        Sleep(1000);
        
    }

    return 0;
}