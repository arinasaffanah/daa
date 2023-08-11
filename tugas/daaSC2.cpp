#include <iostream>
using namespace std;

int deret(int n){
	if (n == 1){
		return 2;
	} else {
		return (2*n + deret(n-1));
	}
}

int main(){
	int bil;
	
	cout << "-----------------------------------------------------------------" << endl;
	cout << "| Program Deret penjumlahan pada bilangan genap dengan Rekursif |" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << endl;
	
	
	cout << "Masukkan jumlah n suku : ";
	cin >> bil;	
	cout << "Hasil penjumlahan : " << deret(bil) << endl;

	return 0;
}