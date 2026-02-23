#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    vector<int> v(26,0);
    for(int i = 0 ; i<s.size(); i++)
    {
        s[i] = toupper(s[i]);
        v[s[i]-65] +=1;
    } 

    int mx = *max_element(v.begin(),v.end());
    int cnt = count(v.begin(),v.end(),mx);
    int result = max_element(v.begin(),v.end()) - v.begin();
    if(cnt>1)
    {
        cout<<"?"<<endl;
    }
    else
    {
        cout<< char('A'+ result) <<endl;
    }


    
}   