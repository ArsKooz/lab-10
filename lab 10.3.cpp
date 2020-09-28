#include <iostream>
using namespace std;

int main()
{
	int a, k;
	cout << "Vvedite chislo\n";
	cin >> a;
	if ((a>9)&&(a<100)&&(a%2==0))
	{
		cout << "true";
	}
	else
	{
		cout << " false";
	}
}