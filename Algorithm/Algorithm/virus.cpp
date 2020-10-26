#include <iostream>
using namespace std;
int num,cnt;
int arr[101][101];
int check[101];

void dfs(int v)
{
	check[v] = 1;
	for (int i = 1; i<=num; i++)
	{
		// 현재 노드와 다음 노드가 연결 되어 있는지
		// 방문을 하지 않았다면
		if (check[i] == 0 && arr[v][i]==1)
		{	
			cnt++;
			dfs(i);
		}
	}



}


int main()
{
	int a, b;
	int e;
	cin >> num;
	cin >> e;

	for (int i = 1; i <= e; i++)
	{
		cin >> a >> b;
		arr[a][b] = arr[b][a] = 1;
	}
	dfs(1);
	cout << cnt << endl;
	return 0;
}