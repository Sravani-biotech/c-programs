/*To check enzyme activity*/
#include<stdio.h>
int main()
{
    int activity;
    printf("Enter enzyme activity level:");
    scanf("%d",&activity);
    if(activity >=0 && activity <20)
       printf("Low activity");
    else if(activity >=20 && activity<=50)
       printf("Moderate activity");
    else if(activity>50 && activity <=100)
       printf("High activity");
    else
        printf("Invalid activity level");
    return 0 ;

}
