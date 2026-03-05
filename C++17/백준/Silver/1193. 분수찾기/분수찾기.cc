#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;

    int cnt =1;
    int B =1;
    
    while(B<A)
    {
        cnt++;
        B=cnt+B;
    }
    int C = A - ( B-cnt) ;

    if(cnt%2==0)
    {
        cout<<C<<"/"<<cnt-C+1;
    }
    else
    {
        cout<<cnt-C+1<<"/"<<C;
    }

}

