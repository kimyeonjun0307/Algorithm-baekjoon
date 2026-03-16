#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    for(int i = A/5; i>=0; i--)
    {
        int B = A-5*i;
        if(B%3==0)
        {
            cout<<i +B/3;
            return 0;
        }        
    }
    cout<<-1;
}