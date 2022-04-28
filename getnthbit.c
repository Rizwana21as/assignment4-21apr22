#include <stdio.h>
int main()
{
    int number,bit_pos;
    /* Get the number input */
    printf("Enter the Number:");
    scanf("%d", &number);
    /* Get the bit position input */
    printf("Enter the Bit position you want to get(Between 0-31):");
    scanf("%d", &bit_pos);
    /* Calculating the bit mask*/
    int mask=(1<<bit_pos);
    /* Checking the Given Position bit is 0 or 1*/
    if (number & mask)
        printf("Given Position bit is 1.\n");
    else
        printf("Given Position bit is 0.\n");
    return 0;
}

