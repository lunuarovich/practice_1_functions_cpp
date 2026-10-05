#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string ageWord(int age)
{
    age = abs(age);

    int lastTwoDigits = age % 100;
    int lastDigit = age % 10;

    if (lastTwoDigits >= 11 && lastTwoDigits <= 14)
        return "років";

    if (lastDigit == 1)
        return "рік";

    if (lastDigit >= 2 && lastDigit <= 4)
        return "роки";

    return "років";
}

int main()
{
    int age;

    cout << "Введіть вік: ";
    cin >> age;

    cout << age << " " << ageWord(age) << endl;

    return 0;
}
