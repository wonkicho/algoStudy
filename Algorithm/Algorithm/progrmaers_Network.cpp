#include <string>
#include <vector>

using namespace std;
bool check[200];
//v= 0 or 1부터 시작해서 방문을 시작하게 됨, 연결된 모든 노드에 대해서 체크를 함

void dfs(int v, vector<vector<int>>& computers, int n)
{
    check[v] = true; // main에서 방문하지 않았을때 호출하니, 호출 시 해당 값은 방문한 것으로 체크를 함
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
        //방문을 하지 않았더라면?
        if (!check[i])
        {
            answer++;
            //해당 노드에 대해 탐색을 실시
            dfs(i, computers, n);
            //연결된 노드를 다 탐색이 됬다면 하나의 네트워크를 생성 -> ++ 해준다.

        }
    }
    return answer;
}