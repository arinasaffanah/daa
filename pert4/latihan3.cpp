#include <iostream>
using namespace std;

int main()
{
    float m, cm, inci;
    system("cls");

    cout << "Masukkan ukuran meter " << endl;
    cin >> m;

    cm = m * 100;
    inci = m * 100 / 2.54;

    cout << "Ukuran dalam cm adalah " << cm << " cm" << endl;
    cout << "Ukuran dalam inci adalah " << inci << " inci" << endl;

    return 0;
}