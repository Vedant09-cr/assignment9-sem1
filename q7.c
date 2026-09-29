#include <stdio.h>

void cyclic_swap(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main()
{
    int a, b, c;
    printf("enter three numbers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("before swapping:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    cyclic_swap(&a, &b, &c);

    printf("after swapping (a <- b, b <- c, c <- a):\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
