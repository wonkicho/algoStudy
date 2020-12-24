#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int result = 0;
	int max_value = 0;
	int N, M;
	for (int i = 0; i < 4; i++)
	{
		cin >> N >> M;
		result = result - N + M;
		max_value = max(result, max_value);
	}
	cout << max_value;


	return 0;
}