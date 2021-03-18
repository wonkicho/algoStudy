#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int main()
{

	int arr[1001];
	int N, L, p;
	int tape = 1;
	cin >> N >> L;

	for (int i = 0;i < N;i++)
	{
		cin >> arr[i];
	}

	sort(arr,arr+N);

	int st = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (arr[i] - st + 1 > L)
		{
			tape++ ;
			st = arr[i] ;
		}
	}

	cout << tape << endl;

	return 0;
}