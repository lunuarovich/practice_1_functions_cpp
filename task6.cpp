#include <iostream>
using namespace std;

bool canFormTriangle(double a, double b, double c) {
    return a > 0 && b > 0 && c > 0 &&
           a + b > c &&
           a + c > b &&
           b + c > a;
}

int main() {
    double a, b, c;

    cout << "Enter three segment lengths: ";
    cin >> a >> b >> c;

    if (canFormTriangle(a, b, c))
        cout << "A triangle can be formed." << endl;
    else
        cout << "A triangle cannot be formed." << endl;

    return 0;
}
