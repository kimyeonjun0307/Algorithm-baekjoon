#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int f1,f2,c,n;
    cin>>f1>>f2>>c>>n;
    int f = f1*n+f2;
    if( f<=c*n && f1 <= c)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }



}
