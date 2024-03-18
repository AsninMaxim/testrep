#include <iostream>
using namespace std;

int main() {
    float a, b, h;

    cout << "Dlina osnovania a: ";
    cin >> a;

    cout << "Dlina osnovania b: ";
    cin >> b;

    cout << "Vysota h: ";
    cin >> h;

    float perimeter = a + b + 2 * sqrt(pow((b - a) / 2, 2) + pow(h, 2));
    float area = (a + b) * h / 2;
    float median = (a + b) / 2;

    cout << "Perimetr: " << perimeter << endl;
    cout << "Plochad: " << area << endl;
    cout << "Srednay linia: " << median << endl;

    return 0;
}