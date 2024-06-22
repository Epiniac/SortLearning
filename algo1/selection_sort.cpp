#include <iostream>
#include "array.h"
#include <chrono> 

void selectionSort() {
    int i, j, minIndex, temp;

    for (i = 0; i < SIZE - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < SIZE; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray() {
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();


    selectionSort();


    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);


    std::cout << "Sorted array: ";

    printArray();


    std::cout << "Time taken to sort: " << duration.count() << " microseconds" << std::endl;


    return 0;

}

