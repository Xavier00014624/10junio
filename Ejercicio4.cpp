#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int x;
    int *apuntador = &x;
    cout << "Ingrese un numero entero";
    cin >> *apuntador;
    delete[] apuntador;
    apuntador = NULL;
    cout << "Ustede ingreso el numero" << x << "\n";
    return 0;
}