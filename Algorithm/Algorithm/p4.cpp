//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int N;
//	int max = -999999;
//	int min = 999999;
//
//	cin >> N;
//	int* arr = new int[N];
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//	/*
//	for (int i=0;i<N;i++){
//		cin>>num;
//		if(num>max)max=num;
//		if(num<min)min=num;
//	}
//	*/
//
//	int ans = max - min;
//	cout << ans;
//
//
//	return 0;
//}