#include <iostream>

//tipo de retorno
//nome
//argumentos
//escopo

void teste() {
    std::cout << "Ola mundo" << "\n";
}

int soma(int x,int y) {
    return x + y;
}
int main(void) {
    teste();
    int x = 10;
    int y = 20;
    int z;
    z = soma(x,y);
    std::cout << "\n" << z;
}
