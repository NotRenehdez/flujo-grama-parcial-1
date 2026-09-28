#include <iostream>
using namespace std;

int main()
{
    float x, f, d, w;

    cout << "Masa (kg): ";
    cin >> x;
    cout << "Fuerza (N): ";
    cin >> f;
    cout << "Distancia (m): ";
    cin >> d;
    if (f >= 0)
    {
        if (d >= 0)
        {
            w = f * d;
            cout << "Cuanto trabajo realizo el operario? " << w << " Joules" << endl;
        }
        else
        {
            cout << "Dato erroneo" << endl;
        }
    }
    else
    {
        cout << "Dato erroneo" << endl;
    }
    return 0;
}
