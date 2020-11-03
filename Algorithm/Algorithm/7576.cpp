#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int tomato[1001][1001];
int d[1001][1001];

//우 좌 하 상
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int main()
{
	int n, m;
	queue<pair<int, int>> q;
	cin >> m >> n;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> tomato[i][j];
			d[i][j] = -1;
			if (tomato[i][j] == 1)
			{
				q.push({ i,j });
				d[i][j] = 0;
			}
		}
	}
	// 토마토 배열 입력
	// 토마토 좌표 값 1인 경우 방문체크

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (0 <= nx && nx < n && 0 <= ny && ny < m)
			{
				if (tomato[nx][ny] == 0 && d[nx][ny] == -1)
				{
					d[nx][ny] = d[x][y] + 1;
					q.push({ nx,ny });
				}
			}
		}
	}
	int result = 0;
	for (int i = 0; i < n; i++) 
	{ 
		for (int j = 0; j < m; j++) 
		{ 
			result = max(result, d[i][j]); 
		} 
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (tomato[i][j] == 0 && d[i][j] == -1)
			{
				result = -1;
			}
		}
	}
	cout << result;

	return 0;
}