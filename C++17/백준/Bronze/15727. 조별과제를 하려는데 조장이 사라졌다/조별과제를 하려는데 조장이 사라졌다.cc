#include <bits/stdc++.h>
using namespace std;

int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    if(A%5==0)
    {
        cout<<(A/5)<<"\n";    
    }
    else
    {
        cout<<(A/5)+1<<"\n";
    }
    
    return 0;
}