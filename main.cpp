#include <iostream>

int main() {
    int arr[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int* ptrArr = arr;

    for (size_t i = 0; i < 4; ++i) {
        std::cout << *(ptrArr + i) << " ";
    }
}