#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff, int *prod, float *quot, int *valid_div)
{
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;

    if (b != 0)
    {
        *quot = (float)a / b;
        *valid_div = 1;
    }
    else
    {
        *valid_div = 0;
    }
}

int main()
{
    int a, b;
    int sum, diff, prod, valid_div;
    float quot;

    printf("enter 2 integers: ");
    scanf("%d %d", &a, &b);

    calculate(a, b, &sum, &diff, &prod, &quot, &valid_div);

    printf("sum: %d\n", sum);
    printf("difference: %d\n", diff);
    printf("product: %d\n", prod);

    if (valid_div)
    {
        printf("quotient: %.2f\n", quot);
    }
    else
    {
        printf("quotient: division by zero is not allowed\n");
    }

    return 0;
}
