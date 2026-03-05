#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int A,B,C;
    cin>>A>>B>>C;
    
    if(C<=A)
    {
        cout<<1;
        return 0;
    }
    int result = (C-A)/(A-B)+1 ;
    if((C-A)%(A-B)!=0)
    {
        cout<<result+1;
    }
    else
    {
        cout<<result;
    }

}

