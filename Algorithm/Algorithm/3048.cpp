#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n1, n2,sec;
	cin >> n1>> n2;
	
	vector<int> dir(n1 + n2);


	string ant1;
	string ant2;
	cin >> ant1;
	cin >> ant2;
	cin >> sec;
	vector<int> s(sec);
	

	reverse(ant1.begin(), ant1.end());
	string ans = ant1 + ant2;
	//cout << ans;
	for (int i = 0; i < sec; i++)s[i] = i+1;
	for (int i = 0; i < n1; i++) {
		//vec[i] = ant1[i];
		dir[i] = 1;
	}
	for (int j = n1; j < n1 + n2; j++) {
		//ans[j] = ant2[j];
		dir[j] = -1;
	}

	

	int idx = 0;
	int cnt = 0;
	int tot = 0;
	int sec_idx = 0;

	for (int i = 0; i < sec; i++)
	{
		tot += s[i];
	}

	while (true)
	{
		if (idx > (n1 + n2-1))break;

		if (dir[idx] == 1 && dir[idx + 1] == -1)
		{
			swap(dir[idx], dir[idx+1]);
			swap(ans[idx], ans[idx + 1]);
			cnt++;
			if (s[sec_idx] == cnt) {
				idx = 0;
				sec_idx++;
			}
		}
		//cout << ans<<' '<<cnt<<"\n";
		idx += 1;
		if (tot < cnt)break;
		
	}


	cout << ans << endl;


	return 0;
}


#include <bits/stdc++.h> 
using namespace std;
int main() {
	int N1, N2, T;
	array<char, 102> dir;
	string s1, s2;
	cin >> N1 >> N2 >> s1 >> s2 >> T;
	reverse(s1.begin(), s1.end());
	for (int i = 0; i < N1; ++i) dir[i] = 'R';
	for (int i = N1; i < N1 + N2; ++i)
		dir[i] = 'L';
	s1 += s2;
	for (int i = 0; i < T; ++i)
	{
		array<char, 102> tmpDir = { 0, };
		for (int j = 0; j < N1 + N2 - 1; ++j)
			if (dir[j] == 'R' && dir[j + 1] == 'L')
			{
				swap(s1[j + 1], s1[j]);
				tmpDir[j + 1] = 'R', tmpDir[j] = 'L';
			}
		for (int k = 0; k < N1 + N2; ++k)
			if (tmpDir[k] == 'L' || tmpDir[k] == 'R')
				dir[k] = tmpDir[k];
	}
	cout << s1 << '\n';
	return 0;
}


