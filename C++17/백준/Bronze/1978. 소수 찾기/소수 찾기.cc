#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    int sum = 0;
    cin>>A;
    for(int i = 0; i<A; i++)
    {
        cin>>B;
        if(B ==1)
        {
            continue;
        }
        bool isReady = true;
        for(int j = 2; j*j<=B; j++)
        {
            if(B%j==0)
            {
                isReady = false;
                break;
            }
        } 
        if(isReady)
            {
                sum ++;
            }
            
    }
    cout<<sum;
    
}
