#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    if(A==1){return 0;}
    for(int i = 2; i*i<=A; i++)
    {
        while(A%i==0)
        {
            A= A/i;
            cout<<i<<"\n";
        }
    }
    if(A>1)
    {
        cout<<A;
    }
}
