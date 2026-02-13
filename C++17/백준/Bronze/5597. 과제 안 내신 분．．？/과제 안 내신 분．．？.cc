#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    vector<int> v(28);
    vector<int> ve;
    int A,B;
    for(int i = 0; i<28; i++)
    {
        cin>>v[i]; 
    }
    for(int j= 1; j<31; j++)
    {
        if(find(v.begin(),v.end(), j) == v.end() )
        {
            ve.push_back(j);
        }

    }
    sort(ve.begin(),ve.end());
    cout<<ve[0]<<"\n"<<ve[1]<<"\n";
}