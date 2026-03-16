#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B,C,D,E;
    cin>>A>>B>>C>>D>>E;
    vector<int> v= {A,B,C,D,E};
    cout<<(A+B+C+D+E)/5<<"\n";
    sort(v.begin(),v.end());
    cout<<v[2];
}
