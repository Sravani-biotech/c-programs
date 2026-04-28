#include <stdio.h>
int main()
 {
    int n,i;
    float c,v,m;
    printf("Enter the  number of samples: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Sample %d\n", i);
        printf("Enter mass : ");
        scanf("%f",&m);
        printf("Enter volume : ");
        scanf("%f",&v);

        if (v!= 0)
        {
            c = m / v;
            printf("Concentration = %.2f\n", c);
        } else
        {
            printf("Volume cannot be zero\n");
        }
     }
    return 0;
}
