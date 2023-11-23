#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    string n;
    cout << "Cual un lenguaje poderoso?";cin >> n;
    frase = "El lenguaje " + n + " es poderoso";
    string sub_str = "C++";
    size_t pos = frase.find(sub_str);
    if(pos != std::string::npos) {
        cout << "Subcadena encontrada en la posición: " << pos << endl;
        cout << "Cadena resultante: " << frase << endl;
    }
    else{
        cout << "Subcadena no encontrada." << endl;
        size_t new_pos = frase.find(n);
        if (new_pos != std::string::npos) {
            string new_sentence = frase.replace(new_pos, n.length(), "Python (que es el mejor)");
            cout << "Cadena resultante: " << new_sentence << endl;
        } else {
            cout << "No se pudo encontrar la subcadena para el reemplazo." << endl;
        }
    }
    return 0;
}