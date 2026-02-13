#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;

    int x;
    cin>>x;
    int min = x;
    int max = x;
    for(int i = 0; i<A; i++)
    {
        cin>>x;
        if(x<min)
        {
            min = x;
        }
        else if(x> max)
        {
            max = x;
        }
    }
    cout<<min<<" "<<max<<"\n";
}