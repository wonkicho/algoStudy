#include <string>
#include <vector>

using namespace std;
bool check[200];
//v= 0 or 1���� �����ؼ� �湮�� �����ϰ� ��, ����� ��� ��忡 ���ؼ� üũ�� ��

void dfs(int v, vector<vector<int>>& computers, int n)
{
    check[v] = true; // main���� �湮���� �ʾ����� ȣ���ϴ�, ȣ�� �� �ش� ���� �湮�� ������ üũ�� ��
    for (int i = 0; i <= n; i++)
    {
        if (check[i] == false && computers[v][i] == 1) {
            dfs(i, computers, n);
        }
    }

}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        //�湮�� ���� �ʾҴ����?
        if (!check[i])
        {
            answer++;
            //�ش� ��忡 ���� Ž���� �ǽ�
            dfs(i, computers, n);
            //����� ��带 �� Ž���� ��ٸ� �ϳ��� ��Ʈ��ũ�� ���� -> ++ ���ش�.

        }
    }
    return answer;
}