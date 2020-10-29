#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


int check[30];
int dis[30];

int main()
{
	//freopen("70.txt", "rt", stdin);
	int n, m, a, b;
	vector<int> map[30];
	queue<int> q;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
	{
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}
	q.push(1);
	check[1] = 1;
	while (!q.empty())
	{
		int x = q.front(); // 큐의 제일 앞 값 참조함
		q.pop();// 값 꺼냄
		for (int i = 0; i < map[x].size(); i++)
		{
			if (check[i] == 0)
			{
				check[map[x][i]] = 1;
				q.push(map[x][i]);
				dis[map[x][i]] = dis[x] + 1;
			}
		}
	}
	for (int i = 2; i <= n; i++)
		cout << i << ':' << dis[i];


	return 0;
}