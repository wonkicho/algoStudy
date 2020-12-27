#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int a, b, c;
    vector <int> v;
    int max_money = 0;
    int m = 0;
    int prize;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a != b && a != c && b != c)
        {
            m = max(a, b);
            m = max(m, c);
            prize = m * 100;
            v.push_back(prize);
        }
        else if (a == b && b == c && a == c)
        {
            prize = a * 1000 + 10000;
            v.push_back(prize);
        }
        else {
            m = max(a, b);
            m = max(m, c);
            prize = m * 100 + 1000;
            v.push_back(prize);
        }
    }
    max_money = *max_element(v.begin(), v.end());
    cout << max_money << endl;

    return 0;
}