#include <bits/stdc++.h>
using namespace std;

int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    for(int i=1;i<=A;i++)
    {
        int B,C;
        cin>>B>>C;
        cout<<"Case #"<<i<<": "<<B+C<<"\n";
    }
    
    return 0;
}