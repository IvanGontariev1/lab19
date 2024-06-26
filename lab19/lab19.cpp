#include <iostream>


template <typename T>
void printArrayDirect(T* array, int size) {
    std::cout << "Array in direct order: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}


template <typename T>
void printArrayReverse(T* array, int size) {
    std::cout << "Array in reverse order: ";
    for (int i = size - 1; i >= 0; --i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArray[] = { 1, 2, 3, 4, 5 };
    double doubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Integer array:\n";
    printArrayDirect(intArray, intSize);
    printArrayReverse(intArray, intSize);

    std::cout << "\nDouble array:\n";
    printArrayDirect(doubleArray, doubleSize);
    printArrayReverse(doubleArray, doubleSize);

    return 0;
}
