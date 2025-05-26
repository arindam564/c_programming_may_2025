// convert temperature from celsius to fahrenheit 
// temp_celsius2fahrenheit.c
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
     
    fahrenheit = (celsius * 9/5) + 32;
    
    printf(" The temperature in fahrenheit :  %.2f°F\n", fahrenheit);
        return 0;
}
