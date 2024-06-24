#include <iostream>
#include <vector>

// Namespace that handles 1D arrays
namespace Array1D {
    void enter_elements(std::vector<int>& array, int size) {
        std::cout << "Enter elements for the 1D array:" << std::endl;
        array.resize(size);
        for (int i = 0; i < size; ++i) {
            std::cout << "Element " << i << ": ";
            std::cin >> array[i]; }}

    void print_elements(const std::vector<int>& array) {
        std::cout << "1D Array elements at indices multiple of 3:" << std::endl;
        for (int i = 0; i < array.size(); ++i) {
            if (i % 3 == 0) {
                std::cout << "Element at index " << i << ": " << array[i] << std::endl; } }}
}

// Namespace tht handles 2D arrays
namespace Array2D {
    void enter_elements(std::vector<std::vector<int>>& array, int rows, int cols) {
        std::cout << "Enter elements for the 2D array:" << std::endl;
        array.resize(rows, std::vector<int>(cols));
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << "Element [" << i << "][" << j << "]: ";
                std::cin >> array[i][j];
            }
        }
    }

    void print_elements(const std::vector<std::vector<int>>& array) {
        int rows = array.size();
        int cols = array[0].size();
        std::cout << "2D Array elements at indices multiple of 3:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (j % 3 == 0) {
                    std::cout << "Element at index [" << i << "][" << j << "]: " << array[i][j] << std::endl; } }} }}

int main() {
    // sizes deraa hu 
    int size_1d = 9;
    int rows_2d = 3;
    int cols_2d = 4;

    // printing nd entering elements 
    std::vector<int> array_1d;
    Array1D::enter_elements(array_1d, size_1d);
    Array1D::print_elements(array_1d);

    // printing nd entering elements 
    std::vector<std::vector<int>> array_2d;
    Array2D::enter_elements(array_2d, rows_2d, cols_2d);
    Array2D::print_elements(array_2d);

    return 0;
}
