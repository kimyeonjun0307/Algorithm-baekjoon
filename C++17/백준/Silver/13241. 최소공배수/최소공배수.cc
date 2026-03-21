#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int A,B;
    cin>>A>>B;
    long long int g = gcd(A,B);
    cout<<A*B/g;

}
