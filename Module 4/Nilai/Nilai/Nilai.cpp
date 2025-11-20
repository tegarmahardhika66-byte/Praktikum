#include <iostream>
using namespace std;

int main() {
	int nilai;

	cout << "nilai:";
	cin >> nilai;

	if (nilai <= 100 and nilai >=90) {
		cout << "A\n";
		cout << "lulus";
	}
	if (nilai <= 89 and nilai >= 75) {
		cout << "B\n";
		cout << "lulus";
	}
	if (nilai <= 74 and nilai >= 65) {
		cout << "C\n";
		cout << "lulus";
	}
	if (nilai <= 64 and nilai >= 0) {
		cout << "D\n";
		cout << "tidak lulus";
	}

	return 0;
}