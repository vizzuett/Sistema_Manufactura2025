#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    // Solicitar al usuario un número
    cout << "Ingrese un número: ";
    cin >> n;

    // Validación básica de entrada (opcional, pero recomendable)
    if (n < 0) {
        cout << "Por favor ingrese un número positivo o cero." << endl;
        return 1;
    }

    // Sumar los números pares desde 0 hasta n
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

    // Mostrar el resultado
    cout << "La suma de los números pares desde 0 hasta " << n << " es: " << suma << endl;

    return 0;
}

