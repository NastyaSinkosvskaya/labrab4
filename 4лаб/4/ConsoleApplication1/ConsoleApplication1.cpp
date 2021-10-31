#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите грузоп. машины: ";
	int m;
	cin >> m;
	int kol;
	cout << "Введите количество коробок: ";
	cin >> kol;
	int x;
	do
	{
		cin >> x;
		m -= x;
		kol--;
		cout << m << "\n";
	} while (kol != 0);
		if (m >= 0)cout << "Не привысет!";else cout << "Превышает!";
}