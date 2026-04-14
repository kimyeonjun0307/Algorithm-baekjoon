#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;

    if(A<=100000&&A%2024==0)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
