#include <iostream>
#include <vector>

using namespace std;

int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };

int main()
{
	int n, m, sx, sy, k;
	int a, b; // 지도 좌표
	cin >> n >> m >> sx >> sy >> k;

	vector<vector<int>> vec;
	vec.assign(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> vec[i][j];
		}
	}
	vector<int> dir;
	vector<int> dice;
	dice.assign(7, 0);

	// 0~3으로 동서북남 설정
	for (int i = 0; i < k; i++)
	{
		int a; cin >> a;
		a = a - 1;
		dir.push_back(a);
	}

	int x = sx;
	int y = sy;


	for (int i = 0; i < dir.size(); i++)
	{
		int d = dir[i]; // 방향
		int nx = x + dx[d]; //좌표 업데이트
		int ny = y + dy[d]; //좌표 업데이트

		//주사위 숫자 업데이트
		int d1, d2, d3, d4, d5, d6;
		d1 = dice[1], d2 = dice[2];
		d3 = dice[3], d4 = dice[4];
		d5 = dice[5], d6 = dice[6];

		if (nx < 0 || ny < 0 || nx >= n || ny >= m)continue;

		//방향에 따른 변환
		if (d == 0)
		{
			dice[1] = d4;
			dice[4] = d6;
			dice[6] = d3;
			dice[3] = d1;
		}
		else if (d == 1)
		{
			dice[4] = d1;
			dice[6] = d4;
			dice[3] = d6;
			dice[1] = d3;
		}
		else if (d == 2)
		{
			dice[1] = d5;
			dice[2] = d1;
			dice[6] = d2;
			dice[5] = d6;
		}
		else if (d == 3)
		{
			dice[5] = d1;
			dice[1] = d2;
			dice[2] = d6;
			dice[6] = d5;
		}


		//0이면 맨 밑면 값 부여
		if (vec[nx][ny] == 0) vec[nx][ny] = dice[6];
		else
		{
			dice[6] = vec[nx][ny];
			vec[nx][ny] = 0;
		}
		cout << dice[1] << "\n";
		x = nx;
		y = ny;
	}

	return 0;
}