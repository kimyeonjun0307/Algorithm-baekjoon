#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    
    int sum = 0;
    
    for(int i = 1; i<A; i++)
    {
        sum = i;
        int temp = i;
        while(temp > 0 )
        {
            sum += temp%10;
            temp/=10;
        }
        
        if(sum == A)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<0;
    
}
