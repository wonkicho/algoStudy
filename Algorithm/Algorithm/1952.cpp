#include <iostream>

using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	int v_map[M][N] = { 0, };
	int visit[M][N] = { 0, };

	int dy[4] = { 1,0,-1,0 };
	int dx[4] = { 0,1,0,-1 };

	int x = 0, y = 0;
	int nx = 0, ny = 0;
	int idx = 0;
	int res = 0;

	while (true)
	{
		nx = x + dx[idx];
		ny = y + dy[idx];

		visit[x][y] = 1;
		if (visit[nx][ny] == 1)
		{
			nx = x;
			ny = y;
		}


		cout << x << y << nx << ny << '\n';



		if ((ny + 1 == N && nx - 1 < 0) || (ny + 1 == N && nx + 1 == M) || (ny - 1 < 0 && nx - 1 < 0) || (ny - 1 < 0 && nx + 1 == M))
		{
			if (idx < 3) {
				idx++;
				res++;
			}
			else {
				idx = 0;
				res++;
			}

		}



		if (visit[x - 1][y] == 1 && visit[x + 1][y] == 1 && visit[x][y - 1] == 1 && visit[x][y + 1] == 1)
		{
			cout << res;
			break;
		}
		x = nx;
		y = ny;
	}

	return 0;
}