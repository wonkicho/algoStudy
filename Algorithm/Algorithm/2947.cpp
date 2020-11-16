#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int a;
	int temp;
	vector<int> v(6);
	
	for (int i = 1; i <= 5; i++)
	{
		cin >> v[i];
	}

	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j < i; j++)
		{
			if (v[j] > v[j + 1])
			{
				temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
				for (int k = 1; k <= 5; k++)
				{
					cout << v[k] << " ";
				}
				cout << endl;
			}
		}
		
	}



	return 0;
}
