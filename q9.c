#include <stdio.h>

int analyze_elements(int arr[], int n, int *smallest, int *second_smallest, int *greatest, int *second_greatest)
{
    if (n < 2)
    {
        return 0;
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    if (min == max)
    {
        return 0;
    }

    int second_min = max;
    int second_max = min;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > min && arr[i] <= second_min)
        {
            second_min = arr[i];
        }
        if (arr[i] < max && arr[i] >= second_max)
        {
            second_max = arr[i];
        }
    }

    *smallest = min;
    *second_smallest = second_min;
    *greatest = max;
    *second_greatest = second_max;

    return 1;
}

int main()
{
    int n;
    int arr[100];
    int smallest, second_smallest, greatest, second_greatest;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int success = analyze_elements(arr, n, &smallest, &second_smallest, &greatest, &second_greatest);

    if (success)
    {
        printf("smallest: %d\n", smallest);
        printf("second-smallest: %d\n", second_smallest);
        printf("greatest: %d\n", greatest);
        printf("second-greatest: %d\n", second_greatest);
    }
    else
    {
        printf("fewer than two distinct values exist in the array.\n");
    }

    return 0;
}
