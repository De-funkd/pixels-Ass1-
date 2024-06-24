#include <iostream>

// Function to sort the array in ascending order
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;

    std::cout << "Enter the number of elements in array: ";
    std::cin >> size;

    int* arr = new int[size];

    std::cout << "Enter the elements in array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Call the sorting function
    sortArray(arr, size);

    std::cout << "Sorted array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the memory
    delete[] arr;

    return 0;
}
