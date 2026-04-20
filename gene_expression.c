/* to check whether gene is expressed*/
#include<stdio.h>
int main()
{
    int gene;
    printf(" Enter gene expression (0=not expressed,1=expressed");
    scanf("%d",&gene);
    if(!gene)
        printf("Gene is not expressed");
    else
        printf("Gene is expressed");
    return 0 ;

}
