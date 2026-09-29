#include <stdio.h>

int sum_of_digits(int n)
{
    int sum = 0;
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int count_digits(int n)
{
    int count = 0;
    if (n == 0)
        return 1;
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int reverse_number(int n)
{
    int rev = 0;
    int sign = (n < 0) ? -1 : 1;
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev * sign;
}

int is_palindrome(int n)
{
    if (n < 0)
        return 0;
    return n == reverse_number(n);
}

int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);

    printf("sum of digits: %d\n", sum_of_digits(x));
    printf("count of digits: %d\n", count_digits(x));
    printf("reverse: %d\n", reverse_number(x));

    if (is_palindrome(x))
    {
        printf("%d is a palindrome\n", x);
    }
    else
    {
        printf("%d is not a palindrome\n", x);
    }

    return 0;
}
