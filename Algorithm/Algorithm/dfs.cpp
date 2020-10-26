//#include <iostream>
//
//using namespace std;
//
////void D(int x)
////{
////	if (x > 7)return;
////	else
////	{
////		D(x * 2);
////		cout << x<<' ';
////		D(x * 2 + 1);
////	}
////}
////
////int main()
////{
////	D(1);
////
////
////	return 0;
////}
//
//int ch[11], n;
//void DFS(int L)
//{
//	if (L == n + 1)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (ch[i] == 1)cout << i;
//		}
//		cout << "\n";
//	}
//	else
//	{
//		ch[L] = 1;
//		DFS(L + 1);
//		ch[L] = 0;
//		DFS(L + 1);
//	}
//}
//
//int main()
//{
//	cin >> n;
//	DFS(1);
//	return 0;
//}