#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    cin>>A>>B;
    int sum = 0;
    vector<int> v;
    for(int j = A; j<=B; j++)
    {
        if(j==1)
        {
            continue;
        }
        
        bool isReady = true;
        for(int i = 2; i*i<=j; i++)
        {
            if(j%i==0)
            {   
                isReady = false;
                break;
            }            
        }
        if(isReady)
        {
            v.push_back(j);
            sum += j;
        } 
    }
    if(sum !=0)
    {
        cout<<sum<<"\n";
        cout<<v[0];
    }
    else{
        cout<<-1;
    }
    
    
}
