#include <iostream>
#include <cmath>  // Äëÿ sqrt()

using namespace std;

int main() {
    double x;

    cout << "Enter value for x: ";
    cin >> x;

    double sqrt_term = sqrt(x * x - 9);

    double z1 = (x * x + 2 * x - 3 + (x + 1) * sqrt_term) / (x * x - 2 * x - 3 + (x - 1) * sqrt_term);
    double z2 = sqrt(x + 3) / sqrt(x - 3);

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}