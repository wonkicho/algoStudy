#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int n;
int arr[1001][1001];
int check[1001];
void dfs(int v)
{	
	//if (n == v) return;
	check[v] = 1;
	cout << v<<' ';
	for (int i = 1; i <= n; i++)
	{
		if (check[i] == 0 && arr[v][i] == 1)
		{
			dfs(i);
		}
	}
	
}

void bfs(int v)
{
	queue <int> q;
	memset(check, 0, sizeof(check));
	check[v] = 1;
	q.push(v);
	while (!q.empty())
	{
		int x = q.front();
		check[x] = 1;
		cout << x <<' ';
		q.pop();
		for (int i = 1; i <= n; i++)
		{
			if (arr[x][i] == 1 && check[i] == 0)
			{
				check[i] = 1;
				q.push(i);
			}
		}
	}


}


int main()
{
	int m, s;
	int u, v;
	cin >> n >> m >> s;
	for (int i = 1; i <= m; i++)
	{
		cin >> u >> v;
		arr[u][v] = arr[v][u] = 1;
	}
	dfs(s);
	cout << '\n';
	bfs(s);

	return 0;
}