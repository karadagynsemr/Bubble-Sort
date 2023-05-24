#include <stdlib.h> 
#include <stdio.h>

void swap(int *x, int *y);

int main() {
    int size, i, j;

    printf("Enter array's size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter values of array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }

    printf("\nSorted array:\n");
    for (i = 0; i < size; i++) {
        printf("%3d", array[i]);
    }

    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
