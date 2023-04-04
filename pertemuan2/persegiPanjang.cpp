#include <iostream>
using namespace std;

int main()
{
    cout << "MENGHITUNG LUAS PERSEGI PANJANG" << endl;

    int p, l, luas;
    cout << "Masukkan panjang : ";
    cin >> p;
    cout << "Masukkan lebar : ";
    cin >> l;

    luas = p * l;

    cout << "Luas persegi panjang tersebut adalah " << luas << " cm2." << endl;
}