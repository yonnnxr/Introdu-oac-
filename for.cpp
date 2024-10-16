#include <iostream>
#include <string>

int main(void) {
    for (int i=0; i < 10; i++) {
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