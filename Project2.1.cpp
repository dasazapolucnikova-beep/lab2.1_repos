#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double alpha;
    double z1, z2;
    const double Pi = 3.141592653589793;

    cout << "alpha = ";
    cin >> alpha;

    z1 = (sin(Pi / 2) + 3 * alpha) /
        (1 - sin(3 * alpha - Pi));

    z2 = 1.0 / tan(5 / 4 * Pi + 3 / 2 * alpha);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}

