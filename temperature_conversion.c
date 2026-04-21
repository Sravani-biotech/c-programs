/*conversion from celsius to fahrenheit*/
#include<stdio.h>
int main ()
{
     float celsius,fahrenheit;
    printf("Enter the temperature in degree celsius");
    scanf("%f",&celsius);
    fahrenheit=celsius*9/5+32 ;
    printf(" The temperature in fahrenheit is %.2f",fahrenheit);
        return 0 ;
}




