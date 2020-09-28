#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Vvedite znachenie A B \n";
	cin >> a >> b >> c;
	if ((a < b) && (b < c))
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
}