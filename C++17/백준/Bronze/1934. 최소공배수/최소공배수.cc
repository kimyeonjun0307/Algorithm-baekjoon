#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B,C;
    cin>>A;
    for(int i = 0; i<A; i++)
    {
        cin>>B>>C;
        int g = gcd(B,C);
        long long l = (long long)B*C/g;
        cout<<l<<"\n";
    }

}
