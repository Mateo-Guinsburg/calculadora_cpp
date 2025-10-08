#include <iostream>
#include <cmath>
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
        cout << "ERROR" << endl;
        return 0;
    }
}
float potencia(float a, float b){
    return pow(a,b);
}

float raiz_2(float a){
    if (a < 0){
        cout << "ERROR" << endl;
        return 0;
    }
    else{
        return sqrt(a);
    }
}   

int main(){
    char repetir = 's';
    float num1, num2;
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

    while (repetir == 's') {
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
}
    
    cout << "=========================================\n";
}