#include <stdio.h>

void display(int arr[], int size)
{
    if (size == 0)
    {
        printf("array is empty\n");
        return;
    }
    printf("array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert_element(int arr[], int *size, int element, int pos)
{
    if (pos < 0 || pos > *size)
    {
        printf("invalid position!\n");
        return;
    }

    for (int i = *size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;
    (*size)++;
    printf("element inserted successfully\n");
}

void delete_element(int arr[], int *size, int pos, int *deleted_val)
{
    if (*size == 0)
    {
        printf("array is empty, cannot delete\n");
        return;
    }
    if (pos < 0 || pos >= *size)
    {
        printf("invalid position!\n");
        return;
    }

    *deleted_val = arr[pos];
    for (int i = pos; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    printf("deleted value: %d\n", *deleted_val);
}

int main()
{
    int arr[100];
    int size = 0;
    int choice, element, pos, deleted_val;

    printf("enter initial size of array: ");
    scanf("%d", &size);

    if (size > 0)
    {
        printf("enter %d elements: ", size);
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
    }

    while (1)
    {
        printf("\n--- Menu ---\n");
        printf("1. Display array\n");
        printf("2. Insert element\n");
        printf("3. Delete element\n");
        printf("4. Exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                display(arr, size);
                break;
            case 2:
                printf("enter element to insert: ");
                scanf("%d", &element);
                printf("enter position (0 to %d): ", size);
                scanf("%d", &pos);
                insert_element(arr, &size, element, pos);
                break;
            case 3:
                printf("enter position to delete (0 to %d): ", size - 1);
                scanf("%d", &pos);
                delete_element(arr, &size, pos, &deleted_val);
                break;
            case 4:
                return 0;
            default:
                printf("invalid choice, try again\n");
        }
    }

    return 0;
}
