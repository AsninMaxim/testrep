#include <iostream>
using namespace std;

int main() {
    float a, b, h;

    cout << "¬ведите длину основани€ a: ";
    cin >> a;

    cout << "¬ведите длину основани€ b: ";
    cin >> b;

    cout << "¬ведите высоту h: ";
    cin >> h;

    float perimeter = a + b + 2 * sqrt(pow((b - a) / 2, 2) + pow(h, 2));
    float area = (a + b) * h / 2;
    float median = (a + b) / 2;

    cout << "ѕериметр трапеции: " << perimeter << endl;
    cout << "ѕлощадь трапеции: " << area << endl;
    cout << "—редн€€ лини€ трапеции: " << median << endl;

    return 0;
}