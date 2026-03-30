#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A,B;
    cin>>A>>B;
    queue<int> q;
    for(int i = 1; i<=A; i++)
    {
        q.push(i);
    }    
    cout<<"<"<<B;
    int cnt = B-1;
    while(cnt--)
        {
            q.push(q.front());
            q.pop();
        }
        q.pop();
    for(int i = 2; i<=A; i++)
    {
        int cnt = B-1;
        while(cnt--)
        {
            q.push(q.front());
            q.pop();
        }
        cout<<", "<<q.front();
        q.pop();
    }
    cout<<">";    
}