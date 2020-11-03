#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int check[10001];
int d[3] = { 1,-1,5 };


int main()
{
	int s, e;
	int x, pos;
	cin >> s >> e;

	queue<int> q;

	check[s] = 1;
	q.push(s);
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (int i = 0; i < 3; i++)
		{
			pos = x + d[i];

			if (pos <= 0 || pos > 10000)continue;
			if (pos == e)
			{
				cout << check[x];
				exit(0);
			}
			if (check[pos] == 0) {
				check[pos] = check[x] + 1;
				q.push(pos);
			}
		}
	}


	return 0;
}