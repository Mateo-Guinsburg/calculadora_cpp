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