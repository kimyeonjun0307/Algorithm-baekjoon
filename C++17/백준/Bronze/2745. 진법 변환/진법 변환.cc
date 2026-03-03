#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int A;
    int result = 0;
    int B = 1;
    cin>>s>>A;
    for(int i = 0; i<s.size(); i++)
    {
        B=1;
        for(int j = s.size()-1; j>i ;j--)
        {
            B *= A;
        }
        
        char D = s[i];
        int digit;
        if(D>='0' &&'9'>=D)
        {
            digit = D -'0';
            
        }
        else
        {
            digit = D - 'A' +10;
        }

        
        result += digit*(B);
        
    }
    cout<<result<<"\n";
}