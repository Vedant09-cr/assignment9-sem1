#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int gcd_three(int a, int b, int c)
{
    return gcd(gcd(a, b), c);
}

int lcm_three(int a, int b, int c)
{
    return lcm(lcm(a, b), c);
}

int main()
{
    int a, b, c;
    printf("enter 3 positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    int g = gcd_three(a, b, c);
    int l = lcm_three(a, b, c);

    printf("GCD: %d\n", g);
    printf("LCM: %d\n", l);

    return 0;
}
