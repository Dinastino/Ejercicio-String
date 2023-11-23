#include <iostream>
#include <string>
using namespace std; // Para no teclear el std:: todo el rato

int main(){
    string frase, frase2;
    cout << "Escribe una frase:";cin >> frase;
    cout << "Escribe otra:";cin >> frase2;
    cout << "Su concatenacion es: \n" << frase + frase2 << endl;
    return 0;
}