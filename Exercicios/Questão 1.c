#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size = 10;
    int arr[size];

    // Lendo a entrada
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printArray(arr, size);

    while (size > 1) {
        int newSize = size - 1;
        for (int i = 0; i < newSize; i++) {
            arr[i] = arr[i] + arr[i + 1];
        }
        size = newSize;
        printArray(arr, size);
    }

    return 0;
}
