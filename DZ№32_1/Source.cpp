#include<iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	unsigned int n;
	
	//������ 1.

	cout << "������ 1.\n������� �����: ";
	cin >> n;
	n--;
	unsigned int res = 2 << n;
	cout << "2 � ������� " << n + 1 << " = " << res << endl;
	
	return 0;
}
