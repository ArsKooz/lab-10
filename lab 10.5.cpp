#include <iostream>
using namespace std;

int main()
{
	int a, d1, d2, d3, d4;
	cout << "Vvedite cchislo\n";
	cin >> a;
	d1 = a % 10;
	a = a / 10;
	d2 = a % 10;
	a = a / 10;
	d3 = a % 10;
	a = a / 10;
	d4 = a % 10;
	if ((d2 == d3) && (d4 == d1))
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
}