#include <iostream>
using namespace std;

int deret(int n){
	if (n == 1){
		return n;
	} else {
		return (n + deret(n-1));
	}
}

int main(){
	int bil;
	
	cout << "---------------------------------------------" << endl;
	cout << "| Program Deret penjumlahan dengan Rekursif |" << endl;
	cout << "---------------------------------------------" << endl;
	cout << endl;
	
	
	cout << "Masukkan jumlah n suku : ";
	cin >> bil;	
	cout << "Hasil penjumlahan : " << deret(bil) << endl;

	return 0;
}