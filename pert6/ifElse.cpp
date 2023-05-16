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

void loopfor()
{
    for (int a = 10; a >= 3; a--)
    {
        cout << a << endl;
    }
}

void pilihan()
{
    int pil;
    cout << "0. Exit" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. loopfor" << endl;
    cout << "Pilih : ";
    cin >> pil;
    system("clear");

    if (pil == 0)
    {
        cout << "Thanks" << endl;
    }
    else if (pil == 1)
    {
        tambah();
        pilihan();
    }
    else if (pil == 2)
    {
        loopfor();
        pilihan();
    }
    else
    {
        cout << "Pilihan salah!" << endl;
    }
}

int main()
{
    pilihan();
    return 0;
}