#include <iostream>
using namespace std;

int main()
{
    float alas, tinggi, luas;
    cout << "\nMENGHITUNG LUAS SEGITIGA" << endl;
    cout << "\nMasukkan nilai alas : ";
    cin >> alas;
    cout << "Masukkan nilai tinggi : ";
    cin >> tinggi;

    luas = 0.5 * alas * tinggi;

    cout << "Luas dari segitiga tersebut adalah " << luas << " cm2" << endl;
}