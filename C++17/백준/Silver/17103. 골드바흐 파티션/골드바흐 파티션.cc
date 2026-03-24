#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int MAX_N = 1000000;
    vector<bool> isPrime(MAX_N+1,true);
    isPrime[0] =isPrime[1] =false;

    for( int i = 2; i*i <=MAX_N; i++)
    {
        if(isPrime[i])
        {
            for(int j = i*i; j<=MAX_N; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }

    
    
    int A,B;
    cin>>B;
    while(B--)
    {   
        cin>>A;
        if(A%2!=0){continue;}
        int cnt = 0;
        for(int a= 2; a<=A/2;a++)
        {
            int b = A-a;
            if(isPrime[a]&&isPrime[b])
            {
                cnt++;
            }
        }
        cout<<cnt<<"\n";        
    }
}