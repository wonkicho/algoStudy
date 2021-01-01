#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    int h;
    int l_v, l_inv;

    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h;
        v.push_back(h);
    }


    int cnt = 1;
    l_v = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (l_v < v[i])
        {
            l_v = v[i];
            cnt++;
        }
    }

    reverse(v.begin(), v.end());

    int cnt_inv = 1;
    l_inv = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (l_inv < v[i])
        {
            l_inv = v[i];
            cnt_inv++;
        }
    }
    cout << cnt << '\n' << cnt_inv;

    return 0;
}
