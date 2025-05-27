// code to adding, subtraction, multiplication and division of 2 integer number 
// add_sub_mul_div2int_better_version.c    
#include <stdio.h>

int main() {
    int v1, v2;
    
    printf("Enter values 1 and 2: "), scanf("%d%d", &v1, &v2);
    
    printf("\n%d + %d = %d", v1, v2, v1 + v2);
    printf("\n%d - %d = %d", v1, v2, v1 - v2);
    printf("\n%d * %d = %d", v1, v2, v1 * v2);
    printf("\n%d / %d = %.2f", v1, v2, (float)v1 / v2);
    
    return 0;
}
