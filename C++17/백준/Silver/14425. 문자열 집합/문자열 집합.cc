#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    string x;
    cin>>A>>B;
    int sum = 0;
    unordered_set<string> s;
    for(int i = 0; i<A; i++)
    {
        cin>>x;
        s.insert(x);
    }
    for(int i = 0; i<B; i++)
    {
        cin>>x;
        if(s.find(x)!=s.end())
        {
            sum++;
        }
    }
    cout<<sum;
}
