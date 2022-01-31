#include <stdio.h>

#define SWAP(a, b) \
    {              \
        int t = a; \
        a = b;     \
        b = t;     \
    }

void selection_sort(int c[], int n3)
{
    for (int i = 0; i < n3 - 1; i++)
    {

        for (int j = i + 1; j < n3; j++)
        {
            if (c[i] > c[j])
            {
                SWAP(c[i], c[j])
            }
        }
    }
}
int main()
{

    int n1, n2, n3;
    printf("Enter the size of first array \n");
    scanf("%d", &n1);
    printf("Enter the size of second array \n ");
    scanf("%d", &n2);

    n3 = n1 + n2;
    printf("Enter the array elements \n");
    int a[n1], b[n2], c[n3];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    selection_sort(a, n1);
    int k = n1;
    printf("Enter the array elements\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    selection_sort(b, n2);

    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (int j = 0; j < n2; j++)
    {
        c[k] = b[j];
        k++;
    }
    printf("After selection_sorting...\n");
    selection_sort(c, n3);
    for (int i = 0; i < n3; i++)
    {
        printf(" %d ", c[i]);
    }
    return 0;
}
