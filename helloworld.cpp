#include <iostream>

int main() {
    int my_number = 42;
    int* my_pointer = &my_number;
    void* my_other_pointer = &my_pointer;
    std::cout << my_other_pointer << std::endl;
    return 0;
}