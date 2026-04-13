#include <bits/stdc++.h>
using namespace std;
int A,B;
vector<int> v;
void DFS(int x, int depth)
{
    if(depth ==B)
    {
        for(int &k: v)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i = x; i<=A; i++)
    {
        v.push_back(i);
        DFS(i,depth+1);
        v.pop_back();
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>A>>B;

    DFS(1,0);
}
