#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B,C;
    cin>>A>>B>>C;

    int max1 = max({A,B,C});
    int two = A+B+C-max1;
    if(max1<two)
    {
        cout<<A+B+C;
    }
    else{
        max1= two -1;
        cout<<max1+two;
    }

}