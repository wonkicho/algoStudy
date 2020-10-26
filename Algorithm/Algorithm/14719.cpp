#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int lmax(vector<int> vec, int idx)
{
	int m = 0;
	// i = 1
	for (int i = idx-1; i >=0; i--)
	{
		m = max(m, vec[i]);
	}
	return m;
}

int rmax(vector<int> vec, int idx)
{
	int m = 0;
	for (int i = idx + 1; i < vec.size(); i++)
	{
		m = max(m, vec[i]);
	}
	return m;
}


int main()
{
	int H, W;
	cin >> H>>W;
	vector<int> vec(W);

	for (int i = 0; i < W; i++)
	{
		cin >> vec[i];
	}

	int water = 0;
	int lx, rx,hv;
	for (int i = 0; i < vec.size(); i++)
	{
		lx = lmax(vec, i);
		rx = rmax(vec, i);
		hv = min(lx, rx);
		if (hv > vec[i]) {
			water += hv - vec[i];
		}
	}
	cout << water << endl;




	return 0;
}