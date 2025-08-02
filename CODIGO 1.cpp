#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    // Solicitar al usuario un n�mero
    cout << "Ingrese un n�mero: ";
    cin >> n;

    // Validaci�n b�sica de entrada (opcional, pero recomendable)
    if (n < 0) {
        cout << "Por favor ingrese un n�mero positivo o cero." << endl;
        return 1;
    }

    // Sumar los n�meros pares desde 0 hasta n
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

    // Mostrar el resultado
    cout << "La suma de los n�meros pares desde 0 hasta " << n << " es: " << suma << endl;

    return 0;
}

