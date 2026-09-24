#include <iostream>
using namespace std;

double calculateZ(double x, double y) {
    if (x <= 0)
        return x - y;

    if (x <= 3)
        return x + 2;

    return x + y;
}

int main() {
    double x, y;

    cout << "Enter x and y: ";
    cin >> x >> y;

    cout << "z = " << calculateZ(x, y) << endl;

    return 0;
}
