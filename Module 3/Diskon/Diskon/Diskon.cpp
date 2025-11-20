#include<iostream>
using namespace std;

int main() {

	double harga;
	double diskon;

	cout << "harga barang :" ;
	cin >> harga;

	cout << "diskon:";
	cin >> diskon;

	cout << "harga barang setelah diskon:"
		<< harga * (100 - diskon) / 100
		<<endl;
	return 0;
}
