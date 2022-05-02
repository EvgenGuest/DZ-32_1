#include<iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	unsigned int n;
	
	//Задача 1.

	cout << "Задача 1.\nВведите число: ";
	cin >> n;
	n--;
	unsigned int res = 2 << n;
	cout << "2 в степени " << n + 1 << " = " << res << endl;
	
	return 0;
}
