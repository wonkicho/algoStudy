#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;
int lower_bound(vector<int>& vec,int n, int key)
{
	int ldx = 0, rdx = n-1;
	int mid;
	while (ldx <= rdx)
	{
		mid = (ldx + rdx) / 2;
		if (vec[mid] < key)ldx = mid + 1;
		else rdx = mid;
	}
	return rdx;
}
int upper_bound(vector<int>& vec, int n, int key)
{
	int ldx = 0, rdx = n-1;
	int mid;
	while (ldx <= rdx)
	{
		mid = (ldx + rdx) / 2;
		if (vec[mid] <= key)ldx = mid + 1;
		else rdx = mid;
	}
	return rdx;
}

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m,lower, upper;
	
	
	
	cin >> n;
	scanf("%d", n);
	vector <int> card(n);
	for (int i = 0; i < n; i++)
	{
		cin >> card[i];
	}
	sort(card.begin(), card.end());

	cin >> m;
	vector <int> number(m);
	vector <int> result(m);
	for (int i = 0; i < m; i++)
	{
		cin >> number[i];
		result[i] = 0;
	}

	for (int i =0; i < m; i++)
	{
		lower = lower_bound(card, n, number[i]);
		upper = upper_bound(card, n, number[i]);
		if (upper == n - 1 && card[n - 1] == number[i])
			upper++;
		result[i] = upper - lower;
	}

	for (int i = 0; i < m; i++)
	{
		cout << result[i];
	}
	return 0;
}


#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;



int main(void)

{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;


	vector<int> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];



	sort(v.begin(), v.end());
	int M;
	cin >> M;



	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		cout << upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num) << " ";
	}

	cout << "\n";
	return 0;

}



