#include <iostream>
using namespace std;

int main() {
    float a, b, h;

    cout << "������� ����� ��������� a: ";
    cin >> a;

    cout << "������� ����� ��������� b: ";
    cin >> b;

    cout << "������� ������ h: ";
    cin >> h;

    float perimeter = a + b + 2 * sqrt(pow((b - a) / 2, 2) + pow(h, 2));
    float area = (a + b) * h / 2;
    float median = (a + b) / 2;

    cout << "�������� ��������: " << perimeter << endl;
    cout << "������� ��������: " << area << endl;
    cout << "������� ����� ��������: " << median << endl;

    return 0;
}