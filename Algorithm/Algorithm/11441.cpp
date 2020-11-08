#include <iostream>

int arr[100001];
int tot[100001];

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, c;
	int a, b;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		tot[i] = tot[i - 1] + arr[i];
	}

	cin >> c;

	for (int i = 1; i <= c; i++)
	{
		cin >> a >> b;
		cout << tot[b] - tot[a - 1] << '\n';
	}



	return 0;
}
