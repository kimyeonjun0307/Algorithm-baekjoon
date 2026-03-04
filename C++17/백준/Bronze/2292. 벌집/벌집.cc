#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    int cnt = 1;
    cin>>A;
    while(A>1)
    {
        A= A-(6*cnt);
        cnt= cnt +1;
    }
    cout<<cnt;
}