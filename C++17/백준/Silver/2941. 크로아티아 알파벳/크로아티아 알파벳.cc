#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int i = 0;
    int count = 0;
    while(i<s.size())
    {
        if(s.substr(i,3) =="dz=")
        {
            i+=3;
        }
        else if ( s.substr(i,2) == "c=" ||s.substr(i,2) == "z=" ||s.substr(i,2) == "s=" ||s.substr(i,2) == "nj" ||s.substr(i,2) == "lj" ||s.substr(i,2) == "d-" ||s.substr(i,2) == "c-" )
        {
            i+=2;
        }
        else 
        {
            i+=1;
        }
        count++;
    }
    cout<<count<<"\n";
}   