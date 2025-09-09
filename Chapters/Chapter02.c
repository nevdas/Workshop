#include <stdio.h>
#define KILOMETERS_TO_MILES 1.609

int main(void){
    double miles, kilometers;

    printf("Enter the distance in miles.");
    scanf("%lf", &miles);

    kilometers = KILOMETERS_TO_MILES * miles;

    printf("That equals to");
    printf("%f", kilometers);

    return 0;
}