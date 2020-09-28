#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Vvedite znacheniya a, b, c\n";
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (c + b > a))
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
}