#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    cin>>A;
    int quarter = 25;
    int dime = 10;
    int nickel =5;
    int penny = 1;

    for( int i =0; i<A; i++)
    {
        cin>>B;
        
        vector<int> s(4);
        while(B>=quarter)
        {
            B= B-quarter;
            s[0] ++;
        }
        while(B>=dime)
        {
            B= B-dime;
            s[1] ++;
        }
        while(B>=nickel)
        {
            B= B-nickel;
            s[2] ++;
        }
        while(B>=penny)
        {
            B= B-penny;
            s[3] ++;
        }
        for(int i = 0; i<4; i++)
        {
            cout<<s[i]<<" ";
        }        
        cout<<"\n";
    }
    
}

