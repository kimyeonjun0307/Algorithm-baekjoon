#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    string name,inout;
    cin>>A;
    unordered_set<string> s;
    s.reserve(A);
    for(int i = 0; i<A; i++)
    {
        cin>>name>>inout;
        if(inout=="enter")
        {
            s.insert(name);
        }
        else{s.erase(name);}
    }
    vector<string> v(s.begin(),s.end());
    sort(v.rbegin(),v.rend());
    for(string &x: v)
    {
        cout<< x <<"\n";
    }    
}
