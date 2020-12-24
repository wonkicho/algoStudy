#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int main()
{
	int M;
	int sum = 0;
	int min_value = 1000;



	for (int i = 0; i < 7; i++)
	{
		cin >> M;
		if (M % 2 != 0)
		{
			sum += M;
			min_value = min(M, min_value);
		}
		else {
			continue;
		}
	}
	if (sum != 0) {
		cout << sum << '\n' << min_value;
	}
	else {
		cout << "-1";
	}

	return 0;
}