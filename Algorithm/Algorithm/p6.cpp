//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str;
//	string ans;
//	cin >> str;
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] >= 48 && str[i] <= 57) {
//			ans += str[i];
//		}
//	}
//
//	if (ans[0] == 48) {
//		ans = ans.substr(1, ans.length() - 1);
//	}
//
//
//	int answer = stoi(ans);
//	int cnt = 0;
//
//	for (int i = 2; i <= answer; i++)
//	{
//		if (answer % i == 0) {
//			cnt++;
//		}
//	}
//	cout << answer << "\n" << cnt + 1;
//
//
//	return 0;
//}

//#include <iostream>
//#include<stdlib.h>
//using namespace std;
//
//int main() {
//
//	char arr[100];
//	cin >> arr;
//	
//	int res = 0;
//	int cnt = 0;
//	for (int i = 0; i<strlen(arr); i++) {
//		if (arr[i] >= 48 && arr[i] <= 57) {
//			res = res * 10 + (arr[i] - 48);
//		}
//	}
//	for (int i = 2; i <= res; i++)
//	{
//		if (res % i == 0)
//		{
//			cnt += 1;
//		}
//	}
//
//
//
//	cout << res << '\n'<<cnt+1;
//	return 0;
//}