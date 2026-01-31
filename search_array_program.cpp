#include <iostream>

int searchNumber(int array[], int size, int target);

int main() {
    int numbers[] = {15, 2, 30, 44, 5, 64, 75, 27};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target;
    
    std::cout << "Enter the number you're looking for: ";
    std::cin >> target;
    
    int index = searchNumber(numbers, size, target);
    
    if (index != -1) {
        std::cout << "Element found at index " << index << "\n";
    } else {
        std::cout << "Element not found in the array!\n";
    }
    
    return 0;
}

int searchNumber(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}