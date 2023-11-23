#include <iostream>
#include <string>
using namespace std; // Para no teclear el std:: todo el rato

int main(){
    string frase; // declaracion de la variable frase de clase string
    cout << "Dame una frase pls: \r";
    getline(cin,frase); // Para imprimir la frase en la variable "frase"
    cout << "Tiene un tamaño de: \n" << frase.size() << endl;
    cout << "¿Esta vacia?: \n" <<  (frase.empty() ? "Sí" : "No") << endl;
    return 0;
}