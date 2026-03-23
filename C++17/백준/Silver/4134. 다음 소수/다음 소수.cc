#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int A,B;
    cin>>A;
    for(long long int i = 0; i<A; i++)
    {
        cin>>B;                
        bool result = true;
        if (B < 2) {
        cout<<2<<"\n";
        continue;
        }
        while( result ==true)
        {
            for(long long int j = 2; j*j<=B; j++)
            {
                if(B%j==0)
                {
                    result = false;
                    break;
                }
            }
            if(result == false)
            {
                B++;
                result = true;
            }
            else
            {
                cout<<B<<"\n";
                break;
            }
        }        
    }
}