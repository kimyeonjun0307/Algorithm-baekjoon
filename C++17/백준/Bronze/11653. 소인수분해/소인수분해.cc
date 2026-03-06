#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    if(A==1){return 0;}
    while(A>=2)
    {
        for(int i = 2; i<=A; i++)
        {
            if(A%i==0)
            {
                A= A/i;
                cout<<i<<"\n";
                break;
            }
        }
    }
}
