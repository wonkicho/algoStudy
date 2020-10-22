//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int main()
//{
//	int m, num;//개수, 찾을값
//	int idx;
//	cin >> m >> num;
//	vector<int> vec(m);
//	for(int i=0;i<m;i++)
//	{
//		cin >> vec[i];
//	}
//
//	sort(vec.begin(), vec.end());
//
//	int s = 0, e = m - 1;
//	while (true){
//		int mid = (s + e) / 2;
//		if (vec[mid] > num) {
//			e = mid - 1;
//		}
//		else if (vec[mid] < num)
//		{
//			s = mid + 1;
//		}
//		else {
//			idx = mid + 1;
//			cout << idx;
//			break;
//		}
//	}
//}