#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1,1,2,2,2,8};
    int A;
    for(int i = 0; i<6; i++)
    {
        cin>>A;
        v[i] = v[i] -A;
    }
    for(int x:v)
    {
        cout<<x<<" ";
    }
    
    return 0;
}   