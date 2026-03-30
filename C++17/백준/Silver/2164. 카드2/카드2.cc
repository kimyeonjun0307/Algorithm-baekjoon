#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A;
    cin>>A;
    queue<int> q;
    for(int i = 1; i<=A; i++)
    {
        q.push(i);
    }
    for(int i = 1; i<A; i++)
    {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout<<q.front();
}