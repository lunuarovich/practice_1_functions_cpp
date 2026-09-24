#include <iostream>
#include <cmath>
using namespace std;

int signValue(double x) {
    if (x < 0)
        return -1;
    if (x > 0)
        return 1;

    return 0;
}

double fractionalPart(double x) {
    return x - trunc(x);
}

long long roundedValue(double x) {
    return llround(x);
}

int main() {
    double x;

    cout << "Enter x: ";
    cin >> x;

    cout << "a) Sign result = " << signValue(x) << endl;
    cout << "b) Fractional part = " << fractionalPart(x) << endl;
    cout << "c) Rounded value = " << roundedValue(x) << endl;

    return 0;
}
