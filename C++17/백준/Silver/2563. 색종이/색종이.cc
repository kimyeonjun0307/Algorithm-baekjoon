#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    vector<vector<int>> s(A,vector<int>(2));
    for(int i = 0; i<A; i++)
    {
        for(int j = 0;j<2; j++)
        {
            cin>>s[i][j];
        }
    }
    
    int maxX = s[0][0];
    int maxY = s[0][1];
    for(int i = 1; i<A; i++)
    {
        if(maxX<s[i][0])
        {
            maxX=s[i][0];
        }
        if(maxY<s[i][1])
        {
            maxY = s[i][1];
        }
    }
    int result = 0;
    vector<vector<int>> K(maxX+10,vector<int>(maxY+10));
     for(int i = 0; i<A; i++)
    {
        int XX = s[i][0];
        int YY = s[i][1]; 
        for(int x = XX; x<XX+10;x++)
        {
                for(int y = YY; y<YY+10; y++)
                {
                    if(K[x][y] != 1)
                    {
                        K[x][y] = 1;
                        result ++;
                    } 
                }
        }
    }
    cout<<result<<"\n";

}