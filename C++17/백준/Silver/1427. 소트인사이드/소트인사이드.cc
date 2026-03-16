#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string A;
    cin>>A;
    vector<int> v(A.size());
    for(int i = 0; i<A.size(); i++)
    {
        v[i]=A[i] - '0';
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int x: v)
    {
        cout<<x;
    }
}