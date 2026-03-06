#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    while(cin>>A)
    {
        if(A==-1)
        {
            return 0;
        }
        
    vector<int> v;    
    int sum = 0;
    for(int i = 1; i<A; i++)
    {
        if(A%i==0)
        {
            v.push_back(i);
        }
    }
    for(int x: v)
    {
        sum = sum + x;

    }
    if(sum == A)
    {
        cout<<A<<" = ";
        for(int x = 0; x<v.size(); x++)
        {
            cout<<v[x];
            if(x!=v.size()-1)
            {
                cout<<" + ";
            }
            else
            {
                cout<<"\n";
            }
            
        }
    }
    else
    {
        cout<<A<<" is NOT perfect."<<"\n";
    }
}
    
}
