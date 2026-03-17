#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,x;
    string y;
    cin>>A;
    vector<pair<int,string>> v(A);
    for(int i = 0; i<A; i++)
    {
        cin>>x>>y;
        v[i] = {x,y};
    }
    stable_sort(v.begin(),v.end(),[](const pair<int,string>& a,const pair<int,string>& b)//stable정렬과 const
    {
        return a.first<b.first;
    });
    for(auto k: v)
    {
        cout<<k.first<<" "<<k.second<<"\n";
    }

}