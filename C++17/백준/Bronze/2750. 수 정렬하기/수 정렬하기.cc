#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    cin>>A;
    vector<int> v;
    for(int i = 0; i<A; i++)
    {
        cin>>B;
        v.push_back(B);
    }
    sort(v.begin(),v.end());
    for(int x: v)
    {
        cout<<x<<"\n";
    }
}