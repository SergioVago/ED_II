#include <stdio.h>

void InsertionSort(int *array, int size)
{
    int key, aux;
    for (int i = 1; i < size; i++)
    {
        key = array[i];
        aux = i - 1;
        while (aux >= 0 && array[aux] > key)
        {
            array[aux + 1] = array[aux];
            aux--;
        }
        array[aux + 1] = key;
    }
}

void ArrayPrint(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
