#include <stdio.h>

void CH2p2_variable_declarations_and_datatypes() {
    double miles = 10;
    double kms;
    int amount;
    char key;
    char first_letter;
    double a, b, c;
}

void CH2p3_printf_function() {
    int number = 50;
    int miles;
    double miles_to_kilometers;
    
    printf("This is my number: %d\n", number);

    printf("Please enter the distance in miles: ");
    fflush(stdout);
    scanf("%lf", &miles);

    miles_to_kilometers = miles * 1.6;
    printf("Miles to Kilometers-> %f\n", miles_to_kilometers);
}

void CH2p3_scanning() {
    char letter_1, letter_2, letter_3;

    scanf("%c%c%c", &letter_1, &letter_2, &letter_3);
    printf("%c\n%c\n%c\n", letter_1, letter_2, letter_3);
}

int main(void){
    CH2p3_scanning();
    return (0);
}