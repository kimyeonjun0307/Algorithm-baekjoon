#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    int cnt =0;
    int C=0;
    cin>>A;
    int B=2;

    while(A>cnt)
    {
        B=(B-1)+B;
        C = B*B;
        cnt++;
    }
    cout<<C;
}