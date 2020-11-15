#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int N;
    vector<int> v;
    queue<int> q;
    cin>>N;
    
    for(int i = 1;i<=N;i++)
    {
        q.push(i);
    }
    while(q.size()>1)
    {   
        v.push_back(q.front());
        q.pop();
        int tmp = q.front();
        q.push(tmp);
        q.pop();
    }
    
    for(int e : v){
        cout << e<<' ';
    }
    cout << q.front();
    return 0;
}
