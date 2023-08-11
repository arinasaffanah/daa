#include <iostream>
using namespace std;

int factorial (int n){
	if ( n == 0 || n == 1){
		return 1;
	} else {
		return n * factorial(n-1);
	}
}

int kombinasi(int n, int r){
	if (n < r){
		return 0;
	} else{
		return (factorial(n) / (factorial(r) * factorial(n-r)));
	}
}

int main(){
	int bil;
	int er;
	
	cout << "---------------------------------------------------" << endl;
	cout << "| Program Kombinasi dengan Faktorial dan Rekursif |" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << endl;
	
	
	cout << "Masukkan n : ";
	cin >> bil;	
	cout << "Masukkan r : ";
	cin >> er;
	cout << "Hasil Kombinasi : " << kombinasi(bil, er) << endl;
	
	cout << endl;
	cout << "Kombinasi = n! / (n-r)!.r!" << endl;
	
	cout << endl;
	cout << "keterangan : " << endl;
	cout << "faktorial n (n!) = " << factorial(bil) << endl;
	cout << "faktorial r (r!) = " << factorial(er) << endl;
	cout << "faktorial n-r (n-r!) = " << factorial(bil-er) << endl;
	

	return 0;
}