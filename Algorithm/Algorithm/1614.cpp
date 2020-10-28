#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int f, h;//손가락 번째, 횟수
	vector<int> vec(5);
	cin >> f >> h;

	int idx = 1;
	int cnt = 1;
	for (int i = 1; i <= 5; i++)vec[i] = 0;




	while (true)
	{
		if (vec[f] > h)break;
		while (true) {
			if (idx == 5)break;
			vec[idx] = vec[idx] + 1;
			if ((idx == f) && (vec[f] > h))
			{
				cnt = cnt - 1;
				break;
			}
			//cout<<idx<<' '<<vec[idx]<<' '<<cnt<<"\n";
			cnt++;
			idx++;

		}


		while (true) {
			if (idx == 1)break;
			vec[idx] = vec[idx] + 1;
			if ((idx == f) && (vec[f] > h))
			{
				cnt = cnt - 1;
				break;
			}
			//cout<<idx<<' '<<vec[idx]<<' '<<cnt<<"\n";
			cnt++;
			idx--;

		}
	}
	cout << cnt;


	return 0;
}



#include <iostream>
using namespace std;

int main() {
	int n, m; cin >> n >> m;

	// 엄지
	if (n == 1)
		printf("%lld", 8LL * m);
	else if (n == 5)
		printf("%lld", 8LL * m + 4);
	else
		printf("%lld", 4LL * m + 1 + (m & 1 ? 4 - n : n - 2));
}