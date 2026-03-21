#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int A,B,C,D;
    cin>>A>>B>>C>>D;
    long long int sum = 0;
    long long int g = gcd(B,D);
    long long int k = (D/g)*B;
    sum = k/B*A + k/D *C;    
    long long int j = gcd(sum,k);
    cout<<sum/j<<" "<<k/j;

}
