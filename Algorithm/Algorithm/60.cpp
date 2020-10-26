#include <iostream>

using namespace std;

int n, a[11], total = 0;
bool flag = false;
void DFS(int L,int sum)
{
	if (sum > total / 2)return;
	if (flag == true)return;
	//종료조건
	if (L == n + 1)
	{
		if ((total - sum) == sum)
		{
			flag = true;
		}
	}
	else {
		DFS(L + 1, sum + a[L]);
		DFS(L + 1, sum);
	}

}


int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		total += a[i];
	}
	DFS(1, 0);
	if (flag)cout << "YES" << '\n';
	else cout << "NO" << '\n';

	return 0;
}