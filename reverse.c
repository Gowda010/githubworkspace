#include <stdio.h>
int rev()
{
    int n, reversedNumber = 0, remainder;

    printf("\n\nEnter an integer:\n\n ");
    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);

    return 0;
}
