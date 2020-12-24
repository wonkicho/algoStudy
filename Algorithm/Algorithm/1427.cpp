#include <iostream>
#include <algorithm>
#include<cstring>

using namespace std;



int main()
{
	char arr[10];
	cin >> arr;
	sort(arr, arr + strlen(arr), greater<int>());
	for (int i = 0; i < strlen(arr); i++)
	{
		cout << arr[i];
	}


	return 0;
}