#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    vector<int> v(A);
    for(int i = 0; i<A; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int x: v)
    {
        cout<<x<<"\n";
    }

}