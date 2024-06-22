#include <iostream>
#include "array.h"
#include <chrono>

void insertionSort(){
    int i, key, j;
    for (i = 1; i < SIZE; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

  insertionSort();

  auto stop = std::chrono::high_resolution_clock::now();

  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);

  std::cout << "Sorted array: ";

  printArray();

  std::cout << "Time taken to sort: " << duration.count() << " microseconds" << std::endl;

  return 0;
}
