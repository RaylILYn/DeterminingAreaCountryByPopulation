#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	system("color F0");
	const int SIZE = 100;
	int x[SIZE], y[SIZE];
	int n, s, j = 0, sum = 0;
	cout << "Введите количество стран (макс.100): ";
	cin >> n;
	cout << endl << "Введите численность населения : " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		cout << " млн.чел." << endl;
	}
	cout << endl;
	cout << endl << "Введите площадь стран: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> y[i];
		cout << " млн.кв.км." << endl;
	}
	cout << endl;
	cout << "Введите площадь, чтобы узнать общую численность населения государств," <<
		" чья площадь больше указанной вами: ";
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		if (y[i] > s)
		{
			sum += x[i];
		}
	}
	cout << endl << "Суммарная численность населения: " << sum << " млн.чел." << endl << endl;
	system("pause");
}