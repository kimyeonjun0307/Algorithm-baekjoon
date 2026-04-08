#include <bits/stdc++.h>
using namespace std;
vector<string> box(int A)
{
    if(A==1) {
        return {"*"};
    }
    vector<string> bigbox = box(A/3);
    vector<string> result;
    for( int i = 0; i<bigbox.size(); i++)
    {
        result.push_back(bigbox[i]+bigbox[i]+bigbox[i]);
    }
    for(int i = 0; i<bigbox.size(); i++)
    {
        result.push_back(bigbox[i]+ string(A/3,' ')+bigbox[i]); 
    }
    for(int i = 0; i<bigbox.size(); i++)
    {
        result.push_back(bigbox[i]+bigbox[i]+bigbox[i]);
    }

    return result;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin >> A;
    vector<string> result2 = box(A);

    for(string s: result2)
    {
        cout<<s<<"\n";
    }
}