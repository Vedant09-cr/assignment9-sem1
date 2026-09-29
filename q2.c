#include <stdio.h>

int even(int n)
{
    return n % 2 == 0;
}

int sign(int n)
{
    return n > 0;
}

int prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int perfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);

    if (even(x))
    {
        printf("%d is even\n", x);
    }
    else
    {
        printf("%d is odd\n", x);
    }

    if (sign(x))
    {
        printf("%d is positive\n", x);
    }
    else if (x == 0)
    {
        printf("%d is zero\n", x);
    }
    else
    {
        printf("%d is negative\n", x);
    }

    if (prime(x))
    {
        printf("%d is prime.\n", x);
    }
    else
    {
        printf("%d is not prime.\n", x);
    }

    if (perfect(x))
    {
        printf("%d is a perfect number.\n", x);
    }
    else
    {
        printf("%d is not a perfect number.\n", x);
    }

    return 0;
}
