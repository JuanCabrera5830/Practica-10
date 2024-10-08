#include <iostream>
using namespace std;

int sumaIterativa(int n)
{
    int suma = 0;
    // Mientras n sea mayor que 9, seguimos sumando los dígitos
    while (n > 9)
    {
        suma += n % 10; // Sumar el último dígito de n
        n /= 10;        // Actualizar n eliminando el último dígito
    }
    // Agregar el último dígito restante
    suma += n; // Esto suma n si n es menor o igual a 9
    return (suma + n); // Devolver la suma total de los dígitos
}

int main()
{
    int numero;
    cout << "Introduce un numero entero: ";
    cin >> numero;

    int resultado = sumaIterativa(numero);
    cout << "La suma de los digitos de " << numero << " es: " << resultado << endl;

    return 0;
}