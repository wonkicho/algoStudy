#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


int main()
{
	priority_queue<int, vector<int>, less<int>> pq;
	vector<int> answer;
	int n, c;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		//scanf("%d\n", &c);
		cin >> c;
		if (c == 0)
		{
			if (pq.empty())printf("0\n");
			else {
				printf("%d\n",pq.top());
				pq.pop();
			}
		}
		else
		{
			pq.push(c);
		}
		
	}

	return 0;
}