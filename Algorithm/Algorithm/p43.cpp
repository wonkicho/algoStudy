//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<int> vec(1001);
//int N;
//
//int Count(int s)
//{
//	int cnt = 1, sum = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		if (sum + vec[i] > s) {
//			cnt += 1;
//			sum = vec[i];
//		}
//		else {
//			sum += vec[i];
//		}
//	}
//	return cnt;
//}
//
//int main()
//{
//	int M; int tot = 0;
//	cin >> N >> M;
//	
//	int rt = 0,lt=1,mid;
//	int res = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> vec[i];
//		rt += vec[i];
//	}
//	while (lt <= rt) {
//		mid = (lt + rt) / 2;
//		if (Count(mid)<=M) {
//			res = mid;
//			rt = mid - 1;
//		}
//		else lt = mid + 1;
//	}
//	
//	cout << res;
//	return 0;
//}