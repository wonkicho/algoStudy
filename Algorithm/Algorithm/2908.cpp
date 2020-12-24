#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string n1, n2;
    cin >> n1 >> n2;
    reverse(n1.begin(), n1.end());
    reverse(n2.begin(), n2.end());

    int r_n1 = stoi(n1);
    int r_n2 = stoi(n2);

    int result = max(r_n1, r_n2);
    cout << result;
    return 0;
}