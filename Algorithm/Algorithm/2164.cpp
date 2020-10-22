#include <queue>
#include <iostream>

using namespace std;
int main()
{	
	queue<int> q;
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		q.push(i);
	}

	while (q.size() > 1)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front();


	return 0;

}
