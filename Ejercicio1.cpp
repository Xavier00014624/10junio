#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout << "Ingrese el numero del cual desea saber el factorial" << "\n";
    cin >> n;

    cout << "El factorial del numero es " << factorial(n);
    return 0;
}
int factorial(int n)
{
    int res;
    if (n == 0)
    {
        res = 1;
    }
    else
    {
        res = 1;
        for (int i = 1; i <= n; i++)
        {
            res = res * i;
        }
    }
    return res;
}
