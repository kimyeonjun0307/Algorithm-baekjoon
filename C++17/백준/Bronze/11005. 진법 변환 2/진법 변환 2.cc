#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    cin>>A>>B;
    int C;
    char s;
    string result = "";
    while(A>0)
    {
        C = A%B;
        A = A/B;
        if(C>=0 && C<=9)
        {   
            s = C +'0';
        }
        else
        {
            s= C +'A' - 10;
        }
        result += s;
    }
    reverse(result.begin(),result.end());
    cout<<result;
}

