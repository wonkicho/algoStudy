#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int sec = 1;
    int tot = 0;

    while (1)
    {
        if (sec > n)
        {
            sec = 1;
        }
        n = n - sec;
        sec++;

        tot++;

        if (n == 0)break;
    }

    cout << tot << endl;
    return 0;
}
