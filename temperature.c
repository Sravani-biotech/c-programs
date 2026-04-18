/*check temperature suitable for bacterial growth*/
#include<stdio.h>
int main()
{
  float temp;
printf("Enter the value of temperature:");
scanf("%f",&temp);
if(temp >=20 && temp <=45)
{
  printf("Temperature is suitable for bacterial growth");
}
else
{
   printf("Temperature is not suitable for bacterial growth");
}
  return 0 ;
} 
