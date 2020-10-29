#include <iostream>
#include <vector>
using namespace std;

int dx[] = { -1, 0, 1, 0 }; 
int dy[] = { 0, 1, 0, -1 };



int main()
{	
	int n, m,r,c;
	int direction;
	int clean = 0;
	cin >> n >> m;
	cin >> r >> c >> direction;
	vector<vector<int>> arr;
	arr.assign(n, vector<int>(m, 0));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	while (true)
	{
		//현재 위치 청소
		if (arr[r][c] == 0)
		{
			arr[r][c] = 2;
			clean++;
		}

		int next = 0;
		for (int i = 0; i < 4; i++)
		{
			direction = (direction + 3) % 4;// 0 + 3 % 4 = 3 왼쪽 전환
			int newR = r + dx[direction];
			int newC = c + dy[direction];
			if (arr[newR][newC] == 0)
			{
				r = newR;
				c = newC;
				next = 1;
				break;
			}
		}

		if (next == 1)continue;

		int newDir = (direction + 2) % 4; // 반대방향 전환
		r = r + dx[newDir];
		c = c + dy[newDir];

		if (arr[r][c] == 1)break;
	}
	cout << clean << '\n';

	return 0;
}