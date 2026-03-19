#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    unordered_set<string> v;
    v.reserve(v.size()*v.size());
    string temp = "";
    for(int i = 0; i<s.size(); i++)
    {
        for(int j = 0; j<s.size()-i; j++)
        {
            temp = s.substr(j,i+1);
            if(v.find(temp) == v.end())
            {
                v.insert(temp);
            }
        }
    }
    cout<<v.size();
}
