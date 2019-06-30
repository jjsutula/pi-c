#include <stdio.h>
#include <wiringPi.h>
#include <time.h>


int main()
{
    wiringPiSetup();
    pinMode(17, OUTPUT);  
    printf("\nC: Time to blink\n");
    printf("\nPress <ctrl><c> to quit...\n");
    while(1) {
        digitalWrite(17, 1);
        delay(1000);
        digitalWrite(17, 0);
        delay(500);
    }
}