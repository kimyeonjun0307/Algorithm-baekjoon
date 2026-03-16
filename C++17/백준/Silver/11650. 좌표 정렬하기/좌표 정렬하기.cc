#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,x,y;
    cin>>A;
    vector<pair<int,int>> v(A);
    for( int i =0; i<A; i++)
    {
        cin>>x>>y;
        v[i] = {x,y};
    }
    sort(v.begin(),v.end());
    for(int i = 0; i<A; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}