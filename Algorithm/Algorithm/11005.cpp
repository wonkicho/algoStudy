#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n, b, r;
	string answer = "";
	char a;
	cin >> n >> b;
	


	while (n > 0)
	{	
		r = n % b;
		if (r >= 10)
		{
			answer += char(r - 10 + 'A');
			
		}
		else {
			answer += char(r + '0');
		}
		n = n / b;

	}
	reverse(answer.begin(), answer.end());
	cout << answer;


	return 0;
}