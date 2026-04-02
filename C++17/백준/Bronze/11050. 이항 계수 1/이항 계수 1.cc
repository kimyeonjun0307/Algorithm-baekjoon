#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long A,B;
    cin>>A>>B;
    long long N=1, K = 1,j=1;
    for(long long i = 1; i<=A; i++)
    {
        N*=i;
    }
    for(long long i = 1; i<=B; i++)
    {
        K*=i;
    }
    for(long long i = 1; i<=A-B; i++)
    {
        j*=i;
    }
    cout<<N/(K*j);
}