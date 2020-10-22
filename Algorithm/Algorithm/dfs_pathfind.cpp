#include <iostream>
#include <vector>
using namespace std;
int n;
int arr[30][30];
int check[30];
int cnt = 0;

void DFS(int v)
{
	//종료조건
	if (v == n)
	{
		cnt++;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (check[i] == 0 && arr[v][i]==1)
			{
				check[i] = 1;
				DFS(i);
				check[i] = 0;
			}
		}
	}
}

int main()
{
	int m;
	int a, b;
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b;
		arr[a][b] = 1;
	}
	check[1] = 1;
	DFS(1);
	cout << cnt;
	return 0;
}