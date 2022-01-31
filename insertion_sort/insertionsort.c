#include <stdio.h>

#define SIZE 10

#define SWAP(a, b) \
    {              \
        int t = a; \
        a = b;     \
        b = t;     \
    }

void Display_array_elements(int arr[]); 
void Insertion_sort(int arr[]);

int main()
{
    int arr[ SIZE ] = { 30, 90, 20, 60, 50, 70, 40, 100, 80, 10 };

    printf("bfore sorting: ");
    Display_array_elements(arr);
    Insertion_sort(arr);
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


void Insertion_sort(int arr[])
{
    int i;
    

    for( i = 1 ; i < SIZE ; i++ ){
        int key = arr[ i ];
        int j = i-1;
        while( j >= 0 && key < arr[ j ] ){
           
            arr[ j+1 ] = arr[ j ];
            j--;
        }
        
        arr[ j+1 ] = key;
    }
    
   
}