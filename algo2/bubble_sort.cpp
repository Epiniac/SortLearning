#include <iostream>
#include "array.h"
#include <chrono> 

void bubbleSort() {
    for (size_t i = 0; i < SIZE - 1; i++) {
        for (size_t j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray() {
  for (int i = 0; i < SIZE; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout <<std::endl;
}

int main() {
  auto start = std::chrono::high_resolution_clock::now();

  bubbleSort();

  auto stop = std::chrono::high_resolution_clock::now();

  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);

  std::cout << "Sorted array: ";

  printArray();

  std::cout << "Time taken to sort: " << duration.count() << " microseconds" << std::endl;

  return 0;
}
