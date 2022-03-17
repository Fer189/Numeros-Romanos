#include <iostream>
using namespace std;
char numeroRomano[20];

void comprobarNumero(char numero[]) {
    int I = 0;
    int V = 0;
    int X = 0;
    int L = 0;
    int cantidad = 0;
    for (int i = 0; i <= 20; i++) {
        if (numero[i] != '\0') {
            cantidad++;
        }
    }
    for (int i = 0; i <= cantidad - 1; i++) {
        if (numero[i] != 'I' && numero[i] != 'V' && numero[i] != 'X' && numero[i] != 'L') {
            cout << "Digito " << i + 1 << " Es incorrecto\n";
        }
        switch (numero[i]) {
        case 'I':
            I++;
            break;
        case 'V':
            V++;
            break;
        case 'X':
            X++;
            break;
        case 'L':
            L++;
            break;
        }
    }
    if (I > 3 || V > 3 || X > 3) {
        cout << "Numero Incorrecto\n";
    }
}

int main() {
    cout << "Hello World!\n";
    cout << "Ingrese un numero romano" << endl;
    cin >> numeroRomano;
    cout << numeroRomano << endl;
    comprobarNumero(numeroRomano);
    return 0;
}