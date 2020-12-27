#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sp = 1;
    long long edge = 2;
    long long p = 0;

    for (int i = 1; i <= n; i++)
    {
        p = sp + edge + i * 2;
        sp = p;
        edge += 1;
    }
    long long res = p % 45678;

    cout << res << endl;
}

