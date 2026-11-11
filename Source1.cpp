#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    if (a > b) {
        cout << "Большее число: " << a << endl;
    }
    else if (b > a) {
        cout << "Большее число: " << b << endl;
    }
    else {
        cout << "Числа равны" << endl;
    }

    return 0;
}