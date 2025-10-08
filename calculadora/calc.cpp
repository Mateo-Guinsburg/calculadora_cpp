#include <iostream>
#include <cmath>
#include "calc.h"
using namespace std;

int main(){
    char repetir = 's';
    float num1, num2, res_anterior;
    char operacion;

    cout << "============== CALCULADORA ==============" << endl;
    cout << "=============== por Mateo ===============" << endl;
    cout << "  Dispone de las siguientes operaciones:" << endl;
    cout << "+ para sumar " << endl;
    cout << "- para restar" << endl;  
    cout << "* para multiplicar " << endl;
    cout << "/ para dividir" << endl;
    cout << "^ para potencia" << endl;
    cout << "2| para raiz cuadrada (ej: 2|9 es 'raiz cuadrada de 9')\n" << endl;

do{
        cin >> num1 >> operacion >> num2;
        switch (operacion){
            case '+':
                cout << suma(num1, num2) << endl;
                break;
            case '-':
                cout << restar(num1, num2) << endl;
                break;
            case '*':
                cout << multiplicar(num1, num2) << endl;
                break;
            case '/':
                cout << dividir(num1, num2) << endl;
                break;
            case '^':
                cout << potencia(num1, num2) << endl;
                break;
            case '|':
                cout << raiz_2(num2) << endl;
                break;
            default:
                cout << "Operacion no válida." << endl;
                break;
        }
    cout << "Desea seguir calculando? (s/n): ";
    cin >> repetir;
    repetir = tolower(repetir);
} while(repetir == 's');
    cout << "=========================================\n";
}