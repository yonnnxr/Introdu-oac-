#include <iostream>
#include <string>

class Humano {
    public:

       std::string nome;
       int idade;
       float altura;
       float peso;
    void Mostrar(){
        std::cout << nome << "\n";
        std::cout << idade << "\n";
        std::cout << altura << "\n";
        std::cout << peso << "\n";
    }

};

int main(void) {
    Humano Carlos;
    Carlos.nome = "Carlos";
    Carlos.idade = 17;
    Carlos.altura = 1.80f;
    Carlos.peso = 67.50f;
    Carlos.get_data();
    Carlos.set_data();
    Carlos.get_data();
    //Carlos.Mostrar();
}
