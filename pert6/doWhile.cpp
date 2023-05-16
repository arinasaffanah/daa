#include <iostream>
using namespace std;

int main()
{
    int pil;
    char back;
    int a = 10;
    int b = 5;
    int c;

    do
    {
        system("clear");
        cout << "0. Exit" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "Pilih : ";
        cin >> pil;

        switch (pil)
        {
        case 0:
            cout << "Exit" << endl;
            return 0;
        case 1:
            system("clear");
            c = a + b;
            cout << c << endl;
            break;
        default:
            system("clear");
            cout << "Pilihan salah " << endl;
            break;
        }
        cout << "Pilih kembali? [y/t] :";
        cin >>
            back;
    } while (back != 't');
    cout << "Thanks" << endl;
    return 0;
}