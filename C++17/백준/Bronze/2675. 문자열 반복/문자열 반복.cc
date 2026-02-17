#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    cin>>A;
    string s;

    for( int i =0; i<A; i++)
    {
        cin>>B>>s;
        for(int j = 0; j<s.size(); j++)
        {
            for( int k = 0; k<B; k++)
            {
                cout<<s[j];
            }
        }
        cout<<"\n";
    }

}