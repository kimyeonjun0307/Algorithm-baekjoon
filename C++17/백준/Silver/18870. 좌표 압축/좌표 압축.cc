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
    vector<int> temp = v;
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i = 0; i<A; i++)
    {
        cout<<lower_bound(v.begin(),v.end(),temp[i])-v.begin()<<" ";
    }
}