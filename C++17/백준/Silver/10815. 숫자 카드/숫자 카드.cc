#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B,x;
    cin>>A;
    unordered_set<int> s;
    for(int i = 0; i<A; i++)
    {
        cin>>x;
        s.insert(x);
    }
    cin>>B;    
    for(int i = 0; i<B; i++)
    {
        cin>>x;
        if(s.find(x)!=s.end())
        {
            cout<<1<<" ";
        }
        else{cout<<0<<" ";}
    }
}
