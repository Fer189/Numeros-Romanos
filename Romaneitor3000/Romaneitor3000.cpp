#include <iostream>
using namespace std;

bool numeroEsCorrecto(char numero[]) {
    int I = 0;
    int V = 0;
    int X = 0;
    int L = 0;
    int C = 0;
    int D = 0;
    int M = 0;
    int cantidad = 0;
    int errores = 0;
    for (int i = 0; numero[i] != '\0'; i++) {
        if (numero[i] != 'I' && numero[i] != 'V' && numero[i] != 'X' && numero[i] != 'L' && numero[i] != 'C' && numero[i] != 'D' && numero[i] != 'M') {
            cout << "Digito " << i + 1 << " Es incorrecto\n";
            errores++;
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
            C++;
            break;
        case 'D':
            D++;
            break;
        case 'M':
            M++;
            break;
        }
        if ((numero[i] == 'I' && numero[i + 1] == 'L') || (numero[i] == 'I' && numero[i + 1] == 'C') || (numero[i] == 'I' && numero[i + 1] == 'D') || (numero[i] == 'I' && numero[i + 1] == 'M')) {
            errores++;
        }
        if ((numero[i] == 'V' && numero[i + 1] == 'X') || (numero[i] == 'V' && numero[i + 1] == 'L') || (numero[i] == 'V' && numero[i + 1] == 'C') || (numero[i] == 'V' && numero[i + 1] == 'D') || (numero[i] == 'V' && numero[i + 1] == 'M')) {
            errores++;
        }
        if ((numero[i] == 'X' && numero[i + 1] == 'D') || (numero[i] == 'X' && numero[i + 1] == 'M')) {
            errores++;
        }
        if ((numero[i] == 'L' && numero[i + 1] == 'C') || (numero[i] == 'L' && numero[i + 1] == 'D') || (numero[i] == 'L' && numero[i + 1] == 'M')) {
            errores++;
        }
        //No se permiten repeticiones de mas de tres letras iguales consecutivas
        if ((numero[i] == 'I' && numero[i + 1] == 'I') && (numero[i] == 'I' && numero[i + 2] == 'I') && (numero[i] == 'I' && numero[i + 3] == 'I')) {
            errores++;
        }
        if ((numero[i] == 'X' && numero[i + 1] == 'X') && (numero[i] == 'X' && numero[i + 2] == 'X') && (numero[i] == 'X' && numero[i + 3] == 'X')) {
            errores++;
        }
        if ((numero[i] == 'C' && numero[i + 1] == 'C') && (numero[i] == 'C' && numero[i + 2] == 'C') && (numero[i] == 'C' && numero[i + 3] == 'C')) {
            errores++;
        }
        if ((numero[i] == 'M' && numero[i + 1] == 'M') && (numero[i] == 'M' && numero[i + 2] == 'M') && (numero[i] == 'M' && numero[i + 3] == 'M')) {
            errores++;
        }
        //No se permite la repeticion consecutiva de V, L y D
        if ((numero[i] == 'V' && numero[i + 1] == 'V')) {
            errores++;
        }
        if ((numero[i] == 'L' && numero[i + 1] == 'L')) {
            errores++;
        }
        if ((numero[i] == 'D' && numero[i + 1] == 'D')) {
            errores++;
        }
    }
    if (errores != 0) {
        return false;
    }
    else {
        return true;
    }
}

int calcularNumeroArabigo(char numero[]) {
    int cantidad = 0;
    for (int i = 0; numero[i] != '\0'; i++) {
        switch (numero[i]) {
        case 'I':
            cantidad += 1;
            break;
        case 'V':
            cantidad += 5;
            break;
        case 'X':
            cantidad += 10;
            break;
        case 'L':
            cantidad += 50;
            break;
        case 'C':
            cantidad += 100;
            break;
        case 'D':
            cantidad += 500;
            break;
        case 'M':
            cantidad += 1000;
            break;
        }
        if ((numero[i] == 'I' && numero[i + 1] == 'V') || (numero[i] == 'I' && numero[i + 1] == 'X')) {
            cantidad -= 2;
        }
        if ((numero[i] == 'X' && numero[i + 1] == 'C') || (numero[i] == 'X' && numero[i + 1] == 'L')) {
            cantidad -= 20;
        }
        if ((numero[i] == 'C' && numero[i + 1] == 'M') || (numero[i] == 'C' && numero[i + 1] == 'D')) {
            cantidad -= 200;
        }
    }
    return cantidad;
}

int main() {
    char numeroRomano[20];
    cout << "Hello World!\n";
    cout << "Ingrese un numero romano" << endl;
    cin >> numeroRomano;
    cout << numeroRomano << endl;
    if (numeroEsCorrecto(numeroRomano)) {
        cout << calcularNumeroArabigo(numeroRomano) << endl;
    }
    else {
        cout << "Vuelva a intentarlo\n";
    }
    return 0;
}