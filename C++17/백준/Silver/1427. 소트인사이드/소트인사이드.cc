#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string A;
    cin>>A;
    sort(A.begin(),A.end(),greater<char>());
    cout<<A;
}