#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,x,y;
    cin>>A;
    vector<pair<int,int>> v(A);
    for(int i = 0; i<A; i++)
    {
        cin>>x>>y;
        v[i] = {y,x};
    }
    sort(v.begin(),v.end());
    for(int i = 0; i<A; i++)
    {
        cout<<v[i].second<<" "<<v[i].first<<"\n";
    }

}//reference 사용 하는 방법도 알아보기