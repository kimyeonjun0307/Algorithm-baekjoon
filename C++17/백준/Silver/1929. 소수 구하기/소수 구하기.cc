#include <bits/stdc++.h>

using namespace std;
bool isprime(int n)
{
    if(n<2){return false;}
    if(n==2){return true;}
    if(n%2==0){return false;}
    for(int i = 3; i*i<=n; i+=2)
    {
        if(n%i==0){return false;}
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    cin>>A>>B;
    for(int i = A; i<=B; i++)
    {
        if(isprime(i))
        {
            cout<<i<<"\n";
        }
    }
}