#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long A,B;
    cin>>A;
    vector<long> v(10001);
    for(long i = 0; i<A; i++)
    {
        cin>>B;
        v[B]++;
    }
    for(long i = 0; i<10001; i++)
    {
        while(v[i]>0)
        {
            cout<<i<<"\n";
            v[i]--;
        }
    }

}