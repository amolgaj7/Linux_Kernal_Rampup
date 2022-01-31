#include <stdio.h>

#define SIZE 10

#define SWAP(a, b) \
    {              \
        int t = a; \
        a = b;     \
        b = t;     \
    }

void Display_array_elements(int arr[]); 
void bubble_sort(int arr[]);

int main()
{
    int arr[SIZE] = {30, 90, 20, 60, 50, 70, 40, 100, 80, 10};

    printf("bfore sorting: ");
    Display_array_elements(arr);
    bubble_sort(arr);
    printf("after sorting: ");
    Display_array_elements(arr);

    return 0;
}

void Display_array_elements(int arr[])
{
    int index;
    printf("array ele's are: ");
    for (index = 0; index < SIZE; index++)
    {
        printf("%4d", arr[index]);
    }
    printf("\n");
}

void bubble_sort(int arr[])
{
    int i, j;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                
                SWAP(arr[j], arr[j + 1]);
            }
        }
    }
}
