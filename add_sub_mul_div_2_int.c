// code to adding, subtraction, multiplication and division of 2 integer number 
// add_sub_mul_div_2_int.c 
#include <stdio.h>
 int main () {
int v1,v2;
int sum,sub,mul ;
float div;
printf("Enter The Value 1: ");
scanf("%d ",&v1);
printf("Enter The Value 2: ");
scanf("%d ",&v2);
sum = v1+ v2;
sub = v1- v2;
mul = v1*v2 ;
div = (float) v1/ v2;
printf ("\n %d + %d=%d",v1,v2,sum);
printf ("\n %d - %d=%d",v1,v2,sub);
printf ("\n %d * %d=%d",v1,v2,mul);
printf ("\n %d /%d=%.2f",v1,v2,div);
return 0;
} 
