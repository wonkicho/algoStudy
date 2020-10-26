#include <string>
#include <vector>

using namespace std;
int cnt = 0;

int DFS(int L, int s, vector<int> num, int t)
{
    int n = num.size();
    if (L == n)
    {
        if (s == t)
        {
            cnt++;
        }
    }
    else {
        DFS(L + 1, s + num[L], num, t);
        DFS(L + 1, s - num[L], num, t);
    }
    return cnt;
}

int solution(vector<int> numbers, int target) {
    int answer = DFS(0, 0, numbers, target);
    return answer;
}