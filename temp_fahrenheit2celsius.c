// convert temperature from fahrenheit to celsius  
// temp_fahrenheit2celsius.c
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
     
    celsius = (fahrenheit - 32) * 5/9 ;
    
    printf(" The temperature in celsius :  %.2f°F\n", celsius);
        return 0;
}
