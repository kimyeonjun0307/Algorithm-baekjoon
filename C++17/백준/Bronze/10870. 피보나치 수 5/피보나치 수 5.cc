#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    long long k =0;
    deque<long long> d;    
    if(A==1){cout<<1;return 0;}
    else if(A==2){cout<<1;return 0;}
    else {
        d.push_back(1);
        d.push_back(1);
        for(int i = 3; i<=A; i++)
        {
            k = accumulate(d.begin(),d.end(),0LL);
            d.pop_front();
            d.push_back(k);
        }
    }
    cout<<k;
    
}