#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Введите число: ";
    cin >> x;

    if (x > 0 && x < 100) {
        cout << "Число: " << x << endl;
    }
    else {
        cout << "Число не входит в диапазон (0; 100)" << endl;
    }

    return 0;
}
}