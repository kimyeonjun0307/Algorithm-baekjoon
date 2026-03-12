#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M;
    cin>>N>>M;
    vector<int> s(N);
    for(int i = 0; i<N; i++)
    {
        cin>>s[i];
    }
    int max= 0;;
    for(int i = 0; i<N; i++)
    {
        
        
        for(int j = i+1; j<N; j++)
        {
            
            for(int k = j+1; k<N; k++)
            {
             int sum = s[i]+s[j]+s[k];
             if(sum>max && sum<=M)
             {
                max = sum;
             }                   
            
                    
            }
           
            
        }
    }
    cout<<max;


}
