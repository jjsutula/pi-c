#include <stdio.h>
#include <wiringPi.h>
#include <time.h>


void main()
{
    int PIN = 0;

    wiringPiSetup();
    pinMode(PIN, OUTPUT);
    printf("\nC: Time to blink\n");
    printf("\nPress <ctrl><c> to quit...\n");
    while(1) {
        printf("On...\n");
        digitalWrite(PIN, 1);
        delay(1000);
        printf("   Off\n");
        digitalWrite(PIN, 0);
        delay(500);
    }
}
