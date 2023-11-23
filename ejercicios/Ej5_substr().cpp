#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Inteligencia Artificial";
    string sub_str = str.substr(13, 9); // "Artificial"

    string new_str = str.insert(0, "La "); // "La Inteligencia Artificial"

    cout << "Subcadena: " << sub_str << endl;
    cout << "Cadena resultante: " << new_str << endl;
    return 0;
}
