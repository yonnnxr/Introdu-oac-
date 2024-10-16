#include <iostream>
#include <string>

int main(void) {
    while (true) {
        int x;
        std::cout << "Digite um numero: ";
        std::cin >> x;

        if (x > 0) {
            std::cout << "Esse numero e positivo \n";
        }
        else if (x < 0) {
            std::cout << "Esse numero e negativo \n";
        }
        else {
            std::cout << "Esse numero e nulo \n";
        }
    }
    }