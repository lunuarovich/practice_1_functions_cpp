#include <iostream>
using namespace std;

double maxValue(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Maximum = " << maxValue(a, b) << endl;

    return 0;
}
