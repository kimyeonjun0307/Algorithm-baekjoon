#include <bits/stdc++.h>
using namespace std;

long long dp[1000001];

long long fib(int n)
{
    if (n==0)
        {return 0;}
    if (n == 1 || n == 2)
    {    return 1;}
    if(dp[n] != 0)
    {
        return dp[n];
    }
    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin >> A;
    cout << fib(A);
}