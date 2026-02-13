#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

    int x;
    int numbers = 0;
    int max = x;
    for(int i = 0; i<9; i++)
    {
        cin>>x;
        
        if(x> max)
        {
            max = x;
            numbers = i+1;
        }
    }
    cout<<max<<"\n"<<numbers<<"\n";
}