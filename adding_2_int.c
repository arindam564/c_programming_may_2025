/* Adding 2 intger number */
/* Adding_2_int.c */
#include <stdio.h>
 int main (){
     int v1,v2,sum ;
     float avg;
     printf ("Enter the Value 1:");
     scanf("%d",&v1);
     printf("Enter the Value 2:");
     scanf("%d",&v2);
     sum = v1+v2;
   
     avg = sum/2 ;
     printf("\nSum=%d",sum);
     printf("\navg = %.2f",avg);
     return 0;
}
