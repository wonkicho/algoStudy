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
		// ���� ���� ���� ��尡 ���� �Ǿ� �ִ���
		// �湮�� ���� �ʾҴٸ�
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