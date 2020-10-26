//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << '\n';
//	int* arr = new int[n];
//	int cnt = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{	
//		if (i == 0) cnt = 1;
//		else cnt = 0;
//		
//		for (int j = i; j > 0; j--) {
//			if (arr[j] >= arr[i]) cnt++;
//		}
//		cout << cnt <<' ';
//	}
//
//	return 0;
//}