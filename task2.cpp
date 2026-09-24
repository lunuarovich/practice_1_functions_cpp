#include <iostream>
using namespace std;

int minusOnePower(int n) {
    return (n % 2 == 0) ? 1 : -1;
}

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "(-1)^n = " << minusOnePower(n) << endl;

    return 0;
}
