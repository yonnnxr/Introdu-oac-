#include <iostream>
#include <string>

int main(void) {
    int Array[10];

    for (int i=0; i < 10; i++) {
        Array[i] = i + 1;
    }
    for (int i=0; i < 10; i++) {
        std::cout << Array[i] << "\n";
    }
    }