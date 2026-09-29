#include <stdio.h>

void sort_ascending(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void sort_descending(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) < *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int n;
    int arr[100];

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("original array: ");
    print_array(arr, n);

    sort_ascending(arr, n);
    printf("ascending order: ");
    print_array(arr, n);

    sort_descending(arr, n);
    printf("descending order: ");
    print_array(arr, n);

    return 0;
}
