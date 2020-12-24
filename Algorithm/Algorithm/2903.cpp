#include <iostream>
using namespace std;
int main()
{
	int N, ans;
	cin >> N;
	int p = 2;
	int step = 1;
	for (int i = 1; i <= N; i++)
	{
		p = p + step;
		step *= 2;
		ans = p * p;
	}
	cout << ans;


	return 0;
}