#include <iostream>
using namespace std;

int fibonacci(int n){
	if ( n == 1 || n == 2){
		return 1;
	} else {
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}

int main(){
	long int bil;
	
	cout << "------------------------------------" << endl;
	cout << "| Program Fibonacci dengan Rekursif |" << endl;
	cout << "-------------------------------------" << endl;
	cout << endl;
	
	
	cout << "Masukkan bilangan : ";
	cin >> bil;	
	cout << "Hasil Operasi Fibonacci : " << fibonacci(bil) << endl;

	return 0;
}