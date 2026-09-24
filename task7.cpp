#include <iostream>
#include <cstdlib>
using namespace std;

int ageWordCode(int age) {
    age = abs(age);

    int lastTwoDigits = age % 100;
    int lastDigit = age % 10;

    if (lastTwoDigits >= 11 && lastTwoDigits <= 14)
        return 3;

    if (lastDigit == 1)
        return 1;

    if (lastDigit >= 2 && lastDigit <= 4)
        return 2;

    return 3;
}

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    cout << "Result = " << ageWordCode(age) << endl;

    return 0;
}
