#include "insertion_sort.h"
#include <stdio.h>

int main()
{
    int arr[6] = {8, 2, 4, 9, 3, 6};

    InsertionSort(arr, 6);

    ArrayPrint(arr, 6);

    printf("Pressione qualquer tecla para continuar ...");
    getchar();
    return 0;
}