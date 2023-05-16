#include <iostream>
using namespace std;

void tambah()
{
    int a = 10;
    int b = 5;
    int c;
    c = a + b;
    cout << c << endl;
}

void pilihan()
{
    int pil;
    char back;
    cout << "0. Exit" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "Pilih : ";
    cin >> pil;

    system("clear");

    do
    {
        switch (pil)
        {
        case 0:
            cout << "Exit" << endl;
            break;
        case 1:
            tambah();
            pilihan();
            break;
        default:
            cout << "Pilihan salah " << endl;
            pilihan();
            break;
        }
        cout << "Pilih kembali? [y/t] :";
        cin >> back;

    } while (back != 't');
    cout << "Thanks" << endl;
}

int main()
{
    pilihan();
    return 0;
}