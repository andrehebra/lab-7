#include <stdlib.h>
#include <stdio.h>

int* bubbleSort(int *array, int length) {

    int *track = malloc(sizeof(int) * 500);

    for (int i = 0; i < length; i++) {
        track[i] = 0;
    }

    int temp;
    int sorted = 0;
    int count = 1;

    while (sorted != length - 1) {

        sorted = 0;

        for (int i = 0; i < length - 1; i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                track[count]++;
            } else {
                sorted++;
            }
        }
        count++;
    }

    track[0] = count + 1;

    return track;
    
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

    printf("Original Array:  ");
    printArray(array, length);

    int *count = bubbleSort(array, length);

    printf("Sorted Array:    ");
    printArray(array, length);

    printf("Number of Swaps: ");

    printArray(&count[1], count[0]);




    return 0;
}