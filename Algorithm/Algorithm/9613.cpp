#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)return a;
	else return gcd(b, a % b);
}


int main()
{
	int n,t;
	
	cin >> t;
	for (int i = 0; i < t; i++)
	{	
		int arr[101];
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}

		long long sum = 0;
		for (int y = 0; y < n; y++)
		{
			for (int x = y; x < n; x++)
			{
				sum += gcd(arr[y], arr[x]);
			}
		}
		cout << sum << "\n";
	}


	return 0;
}