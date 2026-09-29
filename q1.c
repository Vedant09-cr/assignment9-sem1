#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int x, y, result, result2, result3, result4, result5;
    printf("enter 2 numbers: ");
    scanf("%d %d", &x, &y);

    result = add(x, y);
    result2 = subtract(x, y);
    result3 = multi(x, y);

    printf("addition: %d\n", result);
    printf("subtraction: %d\n", result2);
    printf("multiplication: %d\n", result3);

    if (y == 0) {
        printf("division: cannot divide by 0\n");
    } else {
        result4 = div(x, y);
        printf("division: %d\n", result4);
    }

    if (y == 0) {
        printf("modulus: cannot divide by 0\n");
    } else {
        result5 = mod(x, y);
        printf("modulus: %d\n", result5);
    }

    return 0;
}
