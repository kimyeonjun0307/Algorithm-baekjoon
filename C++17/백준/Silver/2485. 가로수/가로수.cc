#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    long long g = 0;
    cin>>A;
    vector<long long int> v(A);
    for(int i = 0; i<A; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 1; i<A; i++)
    {

        g = gcd(g , v[i] - v[i-1]);
    }
    int result = (v[A-1] -v[0])/g+1 ;
    cout<<result-A;

}
