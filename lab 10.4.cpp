#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "Vvedite znachenie chilo\n";
	cin >> a;
	b = a % 10;
	a = a / 10;
	c = a % 10;
	a = a / 10;
	if ((a < b < c) || (a > b > c))
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
}