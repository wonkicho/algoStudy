

#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int i = 1;
    int idx = 0;

    while (1)
    {
        if (num <= idx)
        {
            if (i % 2 == 0) {
                int a = idx - num + 1;
                cout << a << "/" << i - a << endl;
                break;
            }
            else
            {
                int a = idx - num + 1;
                cout << i - a << "/" << a << endl;
                break;
            }
        }

        idx += i;
        ++i;



    }

    return 0;
}
