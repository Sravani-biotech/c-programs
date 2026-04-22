#include <stdio.h>

int main()
 {
    char base;

    printf("Enter a DNA base: ");
    scanf(" %c", &base);

    if (base == 'A' || base == 'T' || base == 'G' || base == 'C')
        printf("It is a valid DNA base.\n");
    else
        printf("Invalid DNA base.\n");

    return 0;
}
