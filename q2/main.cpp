#include <iostream>

int main() {
    int *ptr1 = nullptr;  // set pointers to null
    int *ptr2 = nullptr;  

    // assigning pointer2 to to the point after pointer1
    ptr2 = ptr1 + 1;

    // The difference between the two pointers in terms of integer elements is 1
    // The size of the integer in bytes is the difference in addresses
    int size = (char*)ptr2 - (char*)ptr1;

    std::cout << "Size of integer data type is " << size << " bytes." << std::endl;

    return 0;
}
