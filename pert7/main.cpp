#include <iostream>
#include "kalkulator.cpp"
using namespace std;

int main()
{
    Kalkulator k;
    int pilih;
    char pil;

menu:
    cout << "Aplikasi Kalkulator" << endl;
    k.input();
    cout << endl;
    cout << "\n1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
    cout << "\nMasukkan pilihan anda [1/2/3/4] : ";
    cin >> pilih;
    cout << endl;

    switch (pilih)
    {
    case 1:
        cout << "Hasil = " << k.tambah() << endl;
        break;
    case 2:
        cout << "Hasil = " << k.kurang() << endl;
        break;
    case 3:
        cout << "Hasil = " << k.kali() << endl;
        break;
    case 4:
        cout << "Hasil = " << k.bagi() << endl;
        break;
    }

    return 0;
}