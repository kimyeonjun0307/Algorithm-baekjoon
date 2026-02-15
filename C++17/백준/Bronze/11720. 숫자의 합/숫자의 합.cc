#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    char c;
    int sum = 0;
    for(int i = 0 ; i<A; i++)
    {
        cin>>c;
        sum += c-'0';
    }
    cout<<sum;
    
}