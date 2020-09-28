#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Vvedite znacheniya a b c\n";
	cin >> a >> b >> c;
	a = a * a;
	b = b * b;
	c = c * c;
	if ((a + b == c) || ( b + c == a) || (a + c  == b ))
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
}