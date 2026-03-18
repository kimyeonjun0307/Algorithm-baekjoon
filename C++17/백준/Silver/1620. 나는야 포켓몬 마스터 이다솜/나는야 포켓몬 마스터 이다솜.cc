#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    cin>>A>>B;
    vector<string> v(A+1);
    unordered_map<string,int> m;
    for(int i = 1; i<=A; i++)
    {
        cin>>v[i];
        m[v[i]] = i;
    }
    string x;
    for(int i = 0; i<B; i++)
    {
        cin>>x;
        if(isdigit(x[0]))
        {
            int temp = stoi(x);
            cout<<v[temp]<<"\n";
        }
        else
        {
            cout<<m[x]<<"\n";
        }
    }

}
