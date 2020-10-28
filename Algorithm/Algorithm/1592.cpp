#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int N, M, L;
	cin >> N >> M >> L;
	vector<int> person(N);

	int cnt = 1;
	int bc = 0;
	int idx = 1;
	person[1] = 1;
	while (true)
	{	
		idx = idx + L;
		if (idx + 2 < N) {
			person[idx] + = cnt;
			bc++;
		}
		else
		{
			idx = (idx + L) % N;
			person[idx] += cnt;
			bc++;
		}
		if (person[idx] == M)break;
	}
	cout << bc;
	return 0;

}