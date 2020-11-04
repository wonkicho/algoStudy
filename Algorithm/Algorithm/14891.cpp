#include <iostream>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>

using namespace std;
bool check[4];
int k;
deque<int> dq[4];

queue<pair<int, int>> q;
// 바퀴 인덱스, 방향 넣을 벡터
vector<pair<int, int>> v;



void rotate()
{
	for (int i = 0; i < v.size(); i++)
	{
		int cn = v[i].first;//바퀴 인덱스
		int cd = v[i].second;//방향

		if (cd == 1)
		{
			//시계 방향인 경우, 마지막 원소 빼서 앞으로 푸쉬
			int temp = dq[cn].back();
			dq[cn].pop_back();
			dq[cn].push_front(temp);
		}
		else {
			int temp = dq[cn].front();
			dq[cn].pop_front();
			dq[cn].push_back(temp);
		}
	}
}


void check_rotate()
{

	cin >> k;
	for (int i = 0; i < k; i++)
	{
		memset(check, false, sizeof(check));
		v.clear();
		int num, d;
		cin >> num >> d;
		num -= 1;
		v.push_back({ num,d });
		q.push({ num,d });
		check[num] = true;
		while (!q.empty())
		{
			int cn = q.front().first;
			int cd = q.front().second;
			q.pop();

			if (cn != 0)
			{
				if (dq[cn - 1][2] != dq[cn][6] && !check[cn - 1])
				{
					q.push({ cn - 1, cd * -1 });
					v.push_back({ cn - 1, cd * -1 });
					check[cn - 1] = true;
				}
			}
			if (cn != 3)
			{
				if (dq[cn][2] != dq[cn + 1][6] && !check[cn + 1])
				{
					q.push({ cn + 1,cd * -1 });
					v.push_back({ cn + 1,cd * -1 });
					check[cn + 1] = true;
				}
			}
		}
		rotate();
	}

}



void score()
{
	int sc = 0;
	if (dq[0][0] == 1) sc += 1;
	if (dq[1][0] == 1) sc += 2;
	if (dq[2][0] == 1) sc += 4;
	if (dq[3][0] == 1) sc += 8;
	cout << sc;
}

void input()
{
	for (int i = 0; i < 4; i++)
	{
		string str;
		cin >> str;
		for (int j = 0; j < 8; j++)
		{
			dq[i].push_back(str[j] - '0');
		}
	}
}


int main()
{
	input();
	check_rotate();
	score();


	return 0;
}
