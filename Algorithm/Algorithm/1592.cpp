#include <iostream>
#include <vector>



using namespace std;
int main()

{
	int N, M, L;
	cin >> N >> M >> L;
	vector<int> person(N);
	for (int i = 0; i < N; i++)person[i] = 0;

	int bc = 0;
	int idx = 0;

	person[0] = 1;
	while (true)
	{
		if (person[idx] % 2 != 0)
		{
			idx = idx + L;
			if (idx > N-1)
			{
				idx = idx -N ;

			}
		}
		else {
			idx = idx - L;
			if (idx < 0)
			{
				idx = idx+N;
			}
		}
		person[idx]++;
		bc++;
		if (person[idx] == M)break;
	}
	cout << bc;
	return 0;
}
