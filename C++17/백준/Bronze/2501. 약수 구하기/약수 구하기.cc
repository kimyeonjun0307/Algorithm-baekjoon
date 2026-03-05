#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    cin>>A>>B;
    int cnt = 0;
    int result = 0;
    for(int i = 1; i<=A; i++)
    {
        if(A%i==0)
        {
            cnt++;
            if (cnt == B)
            {
                result = i;
                break;
            }
        }
               
    }
    if(cnt<B)
    {
        cout<<0;
    }
    else
    {
        cout<<result;
    }
}
