#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double AB, BC, AC;
    cout << "Введіть першу сторону <3: ";
    cin >> AB;
    cout << "Введіть другу сторону <3: ";
    cin >> BC;
    cout << "Введіть третю сторону <3: ";
    cin >> AC;
    if (AB <= 0 || BC <= 0 || AC <= 0) {
        cout << "Довжини сторін повинні бути додатними числами :(";
    } else {
        if (AB == BC && BC == AC) {
            cout << "Трикутник рівносторонній :)";
        } else if (AB == BC || AB == AC || BC == AC) {
            cout << "Трикутник рівнобедрений :/";
        } else {
            cout << "Трикутник різносторонній -_-";
        }
    }
}
