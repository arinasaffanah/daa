#include <iostream>
using namespace std;

int main()
{
    char cKode;

    cout << "Input Kode Jurusan [A/B] : ";
    cin >> cKode;

    switch (cKode)
    {
    case 'A':
    case 'a':
        cout << "\nTeknik Informatika";
        break;
    case 'B':
    case 'b':
        cout << "\nSistem Informasi";
        break;
    default:
        cout << "\nAnda Salah Memasukkan Kode";
        break;
    }
}