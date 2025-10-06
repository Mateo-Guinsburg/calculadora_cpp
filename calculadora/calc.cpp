#include <iostream>
using namespace std;

float suma(float a, float b) { 
    return a + b;
}
float restar(float a, float b) { 
    return a - b; 
}
float multiplicar(float a, float b) { 
    return a * b; 
}
float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    }
    
    else {
        cout << "ERROR\n";
        return 0;
    }
}


int main(){
    char repetir = 's';
    float num1, num2;
    char operacion;

    cout << "============== CALCULADORA ==============\n";
    cout << "=============== por Mateo ===============\n";
    cout << "  Dispone de las siguientes operaciones:" << endl;
    cout << "'+' para sumar " << endl;
    cout << "'-' para restar" << endl;  
    cout << "'*' para multiplicar " << endl;
    cout << "'/' para dividir \n" << endl;

    while (repetir == 's') {
        cin >> num1 >> operacion >> num2;
        switch (operacion){
            case '+':
                cout << suma(num1, num2) << "\n";
                break;
            case '-':
                cout << restar(num1, num2) << "\n";
                break;
            case '*':
                cout << multiplicar(num1, num2) << "\n";
                break;
            case '/':
                cout << dividir(num1, num2) << "\n";
                break;
            default:
                cout << "Operacion no válida.\n";
                break;
        }
        cout << "Desea seguir calculando? (s/n): ";
        cin >> repetir;
        repetir = tolower(repetir);
}
    
    cout << "=========================================\n";
}