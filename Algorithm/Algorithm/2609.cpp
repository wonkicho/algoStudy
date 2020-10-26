#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}

int lcm(int g, int a, int b)
{
	int l = g * (a / g) * (b / g);
	return l;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << lcm(gcd(a, b), a, b);


	return 0;
}