#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    int B=1;
    for(int i = 1; i<=A; i++)
    {
        B*=i;
    }
    cout<<B;
}