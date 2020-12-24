#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int N;
	vector<int> v(101);
	v.assign(101, 0);
	for (int i = 1; i <= 10; i++)
	{
		cin >> N;
		v[N / 10] += 1;
	}
	cout << *max_element(v.begin, v.end()) << endl;
	


	return 0;
}