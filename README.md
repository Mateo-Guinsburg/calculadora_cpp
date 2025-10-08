# Calculadora en C++

Este es mi primer proyecto personal en C++: una **calculadora que realiza operaciones matemáticas básicas en la consola**.  
El objetivo fue practicar **código básico** como el uso de condicionales, bucles y librerías.

---

## Cómo funciona

La calculadora hace uso de las siguientes operaciones:

- `+` ➝ Suma  
- `-` ➝ Resta  
- `*` ➝ Multiplicación  
- `/` ➝ División  
- `^` ➝ Potencia  
- `2|` ➝ Raíz cuadrada (ejemplo: `2|9 = 3`)  

El programa se ejecuta en bucle hasta que el usuario decida salir.

---

## Estructura

El proyecto se basa en 2 archivos dentro de la carpeta `calculadora`:

calculadora/main.cpp --> Programa principal

calculadora/calc.h --> Biblioteca con las funciones matemáticas


---

## Ejecución

Para compilar y ejecutar en la consola con g++:

```bash
g++ main.cpp -o calculadora
./calculadora


Ejemplo de uso

============== CALCULADORA ==============
=============== por Mateo ===============
  Dispone de las siguientes operaciones:
+ para sumar
- para restar
* para multiplicar
/ para dividir
^ para potencia
2| para raiz cuadrada (ej: 2|9 es 'raiz cuadrada de 9')

Entrada: 5 + 3
Salida: 8

Desea seguir calculando? (s/n): s

Entrada: 2 ^ 4
Salida: 16

Desea seguir calculando? (s/n): s

Entrada: 2 | 9
Salida: 3

Desea seguir calculando? (s/n): n
=========================================
