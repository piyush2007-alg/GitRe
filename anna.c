#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Natural numbers up to %d are:\n", n);

        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
            sum = sum + i;
        }

        printf("\n");
        printf("Sum = %d\n", sum);

        if (sum % 2 == 0)
        {
            printf("The sum is Even.\n");
        }
        else
        {
            printf("The sum is Odd.\n");
        }
    }
    else
    {
        printf("Please enter a positive number.\n");
    }

    printf("\nMultiplication Table of %d:\n", n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    printf("Program Completed Successfully.\n");

    return 0;
}