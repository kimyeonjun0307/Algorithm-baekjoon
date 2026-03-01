#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,x,y;
    int max = -1;

    for(int i = 0; i<9; i++)
    {
        for(int j = 0; j<9; j++)
        {
            cin>> A;
            if(max<A)
            {
                max = A;
                x = i;
                y = j;
            }

        }
    }
    cout<<max<<"\n";
    cout<<x+1<<" "<<y+1<<"\n";
}