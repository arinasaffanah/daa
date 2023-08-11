#include <iostream>
using namespace std;

int factorial (int n)
{
	if ( n == 0 || n == 1){
		return 1;
	} else {
		return (n * factorial(n-1));
	}                          	 
}

int fibonacci(int n)
{
	if ( n == 1 || n == 2){
		return 1;
	} else {
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}


int kombinasi(int n, int r)
{
	if (n < r){
		return 0;
	} else{
		return (factorial(n) / (factorial(r) * factorial(n-r)));
	}
}

int permutasi(int n, int r)
{
	if (n < r){
		return 0;
	} else{
		return (factorial(n) / factorial(n-r));
	}
}

int deretJumlah(int n)
{
	if (n == 1){
//		cout << "1 = ";
		return n;
	} else{
//		cout << n << "+";
		return (n + deretJumlah(n-1));
	}
}

int deretGenap(int n)
{
	if (n == 1){
//		cout << "2 = ";
		return 2;
	} else {
//		cout << 2*n << "+";
		return (2*n + deretGenap(n-1));
	}
}

void system()
{system("cls");}

void pause()
{cout<<"\n\n"; system("PAUSE"); system("cls");}

int main(){
	int bil = 0;
	int pil, er, total;
	int f1 = 0;
	int f2 = 1;
	int temp = 0;
	
	
	menu:
		system("cls");
	
		cout<<endl;
		cout << "\t\t\t\t            Arina Saffanah Zakiyyah       " << endl;
		cout << "\t\t\t\t                 20220801189              " << endl;
		cout<< "\n\t\t\t\t =========================================="<<endl;
		cout<< "\t\t\t\t =             SELAMAT DATANG             ="<<endl;
		cout<< "\t\t\t\t =========================================="<<endl;
	
		cout<< "\t\t\t\t  1. Faktorial"<<endl;
		cout<< "\t\t\t\t  2. Fibonacci"<<endl;
		cout<< "\t\t\t\t  3. Kombinasi"<<endl;
		cout<< "\t\t\t\t  4. Permutasi"<<endl;
		cout<< "\t\t\t\t  5. Deret Penjumlahan"<<endl;
		cout<< "\t\t\t\t  6. Deret Penjumlahan Bilangan Genap"<<endl;
		cout<< "\n\t\t\t\t  Pilih [1/2/3/4/5/6] : ";
		cin>>pil;
			switch(pil){
				case 1 :
					system("cls");
            		
            		cout << "\t\t\t\t -------------------------------------" << endl;
					cout << "\t\t\t\t | Program Faktorial dengan Rekursif |" << endl;
					cout << "\t\t\t\t -------------------------------------" << endl;
					cout << endl;
	
	
					cout << "\t\t\t\t Masukkan bilangan : ";
					cin >> bil;
					cout << "\t\t\t\t Hasil Faktorial : " << factorial(bil) << endl;
            		
            		pause(); goto menu;
            		break;
				case 2 :
					system("cls");
					
					cout << "\t\t\t\t ------------------------------------" << endl;
					cout << "\t\t\t\t | Program Fibonacci dengan Rekursif |" << endl;
					cout << "\t\t\t\t -------------------------------------" << endl;
					cout << endl;

					cout << "\t\t\t\t Masukkan bilangan : ";
					cin >> bil;
					cout << "\t\t\t\t ";

					cout << f2 << ", ";
					
					total = f1 + f2;
					for(int i = 3; i <= bil; i++){
						temp = f1 + f2;
						f1 = f2;
						f2 = temp;
						cout << temp;
						if(i != bil){
							cout << ", ";
						}
						total += temp;
					}
					cout << ", " << fibonacci(bil) << endl;
					cout << "\n\t\t\t\t Hasil Operasi Fibonacci : " << fibonacci(bil) << endl;
					pause(); goto menu;
            		break;
            	case 3 :
            		system("cls");
            		
            		cout << "\t\t\t\t ---------------------------------------------------" << endl;
					cout << "\t\t\t\t | Program Kombinasi dengan Faktorial dan Rekursif |" << endl;
					cout << "\t\t\t\t ---------------------------------------------------" << endl;
					cout << endl;
	
	
					cout << "\t\t\t\t Masukkan n : ";
					cin >> bil;	
					cout << "\t\t\t\t Masukkan r : ";
					cin >> er;
					cout << "\t\t\t\t Hasil Kombinasi : " << kombinasi(bil, er) << endl;
	
					cout << endl;
					cout << "\t\t\t\t Kombinasi = n! / (n-r)!.r!" << endl;
	
					cout << endl;
					cout << "\t\t\t\t keterangan : " << endl;
					cout << "\t\t\t\t faktorial n (n!) = " << factorial(bil) << endl;
 					cout << "\t\t\t\t faktorial r (r!) = " << factorial(er) << endl;
					cout << "\t\t\t\t faktorial n-r (n-r!) = " << factorial(bil-er) << endl;
					pause(); goto menu;
            		break;
            	case 4 :
            		system("cls");
            		
            		cout << "\t\t\t\t ---------------------------------------------------" << endl;
        			cout << "\t\t\t\t | Program Permutasi dengan Faktorial dan Rekursif |" << endl;
        			cout << "\t\t\t\t ---------------------------------------------------" << endl;
        			cout << endl;
	
        			cout << "\t\t\t\t Masukkan n : ";
        			cin >> bil;	
        			cout << "\t\t\t\t Masukkan r : ";
        			cin >> er;
        			cout << "\t\t\t\t Hasil Permutasi : " << permutasi(bil, er) << endl;
	
	        		cout << endl;
	        		cout << "\t\t\t\t Kombinasi = n! / (n-r)!" << endl;
	
	        		cout << endl;
	        		cout << "\t\t\t\t keterangan : " << endl;
	        		cout << "\t\t\t\t faktorial n (n!) = " << factorial(bil) << endl;
	        		cout << "\t\t\t\t faktorial n-r (n-r!) = " << factorial(bil-er) << endl;
	        		pause(); goto menu;
            		break;
            	case 5 :
            		system("cls");
            		
            		cout << "\t\t\t\t ---------------------------------------------" << endl;
        			cout << "\t\t\t\t | Program Deret penjumlahan dengan Rekursif |" << endl;
        			cout << "\t\t\t\t ---------------------------------------------" << endl;
        			cout << endl;
	
        			cout << "\t\t\t\t Masukkan jumlah n suku : ";
        			cin >> bil;
        			cout << "\t\t\t\t S => ";
					for (int i = 1; i<= bil; i++){
						cout << i;
						if (i != bil){
							cout << " + ";
						}
					}
        			cout << " = " << deretJumlah(bil) << endl;
	        		pause(); goto menu;
            		break;
            	case 6 :
            		system("cls");
            		
            		cout << "\t\t\t\t -----------------------------------------------------------------" << endl;
        			cout << "\t\t\t\t | Program Deret penjumlahan pada bilangan genap dengan Rekursif |" << endl;
        			cout << "\t\t\t\t -----------------------------------------------------------------" << endl;
        			cout << endl;	
	
        			cout << "\t\t\t\t Masukkan jumlah n suku : ";
        			cin >> bil;	
					cout << "\t\t\t\t S => ";
					for (int i = 1; i<= bil; i++){
						cout << i * 2;
						if (i != bil){
							cout << " + ";
						}
					}
					cout << " = " << deretGenap(bil) << endl;
        			pause(); goto menu;
            		break;
            	default :
            		cout << "\n\t\t\t\t Kode yang anda masukkan salah" << endl;
            		pause(); goto menu;
           			break;
    		}
	return 0;
}