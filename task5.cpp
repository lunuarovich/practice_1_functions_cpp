#include <iostream>
#include <cmath>
using namespace std;

double logarithm(double x, double y) {
    if (x > 0 && x != 1 && y > 0)
        return log(y) / log(x);

    return 0;
}

int main() {
    double x, y;

    cout << "Enter base x and number y: ";
    cin >> x >> y;

    cout << "Result = " << logarithm(x, y) << endl;

    return 0;
}
