#include <iostream>
using namespace std;
int factorial(int n)
{
    int res;
    if (n == 0)
    {
        res = 1;
    }
    else
    {
        res = n * factorial(n - 1);
    }

    return res;
}

int main()
{
    int n;
    cout << "Ingrese el numero del cual desea saber el factorial" << "\n";
    cin >> n;

    cout << "El factorial del numero es " << factorial(n);
    return 0;
}
