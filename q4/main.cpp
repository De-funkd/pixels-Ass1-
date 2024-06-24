#include <iostream>

int main() {
    const int MAX_SIZE = 4; // array ka maax size avail(kuch bhi chun lo )
    int n;
    int numbers[MAX_SIZE];

    std::cout << "Enter the number of elements (up to " << MAX_SIZE << "): ";
    std::cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        std::cerr << "Invalid input size. Please enter a number between 1 and " << MAX_SIZE << "." << std::endl;
        return 1;
    }

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    // Initialize the smallest and largest with the first element
    int smallest = numbers[0];
    int largest = numbers[0];

    // Iterate over the array using pointers (acting as iterators)
    for (int i = 1; i < n; ++i) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    std::cout << "Smallest: " << smallest << std::endl;
    std::cout << "Largest: " << largest << std::endl;

    return 0;
}
