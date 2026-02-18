#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    cin>>A>>B;
            
    string s = to_string(A);
    reverse(s.begin(),s.end());
    string j = to_string(B);
    reverse(j.begin(),j.end());
    int c = stoi(s);
    int d = stoi(j);

    if(c>d)
    {
        cout<<c<<"\n";
    }
    else
    {
        cout<<d<<"\n";
    }

    return 0;
}