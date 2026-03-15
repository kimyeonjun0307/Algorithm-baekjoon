#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    int cnt2 =0;
    for(int i = 665; i<1000000000;i++)
    {
        int cnt =0;
        string B= to_string(i);
        for(int j =0; j<B.size();j++)
        {
            if(B[j]=='6'){cnt++; if(cnt >=3){cnt2++; break;}}
            else{cnt=0;}
        } 
        if(cnt2==A)
        {
            cout<<i;
            return 0;
        }
    }
}
