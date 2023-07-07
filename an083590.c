#include <stdlib.h>
#include <stdio.h>

int bubbleSort(int *array, int length) {

    int temp;
    int sorted = 0;
    int count = 0;

    while (sorted != length - 1) {

        sorted = 0;

        for (int i = 0; i < length - 1; i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                count++;
            } else {
                sorted++;
            }
        }
    }

    return count;
    
}

void printArray(int *array, int length) {
    for (int i = 0; i < length; i++) {
        printf("%3d", array[i]);
    }

    printf("\n");
}

int main() {

    int array[9] = {97,  16,  45,  63,  13,  22,  7 , 58 , 72};
    int length = 9;
    int count = 0;

    printf("Original Array:  ");
    printArray(array, length);

    count = bubbleSort(array, length);

    printf("Sorted Array:    ");
    printArray(array, length);

    printf("\nNumber of Swaps: %3d\n", count);




    return 0;
}