#include <iostream>
using namespace std;

void comprobarNumero(char numero[]) {
    int I = 0;
    int V = 0;
    int X = 0;
    int L = 0;
    int C = 0;
    int D = 0;
    int M = 0;
    int cantidad = 0;
    for (int i = 0; numero[i] != '\0'; i++) {
            cantidad++;
    }
    for (int i = 0; i <= cantidad - 1; i++) {
        if (numero[i] != 'I' && numero[i] != 'V' && numero[i] != 'X' && numero[i] != 'L' && numero[i] != 'C' && numero[i] != 'D' && numero[i] != 'M') {
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
        case 'C':
            L++;
            break;
        case 'D':
            L++;
            break;
        case 'M':
            L++;
            break;
        }
    }
    if (I > 3 || V > 3 || X > 3 || C > 3 || D > 3 || M > 3) {
        cout << "Numero Incorrecto\n";
    }
}

int main() {
    char numeroRomano[20];
    cout << "Hello World!\n";
    cout << "Ingrese un numero romano" << endl;
    cin >> numeroRomano;
    cout << numeroRomano << endl;
    comprobarNumero(numeroRomano);
    return 0;
}