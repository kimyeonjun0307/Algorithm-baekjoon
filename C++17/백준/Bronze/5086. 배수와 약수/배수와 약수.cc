#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    cin>>A>>B;

    while(A!=0 && B!=0)
    {

        if(B%A==0)
        {
            cout<<"factor"<<"\n";
        }
        else if(A%B==0)
        {
            cout<<"multiple"<<"\n";
        }
        else
        {
            cout<<"neither"<<"\n";
        }
        cin>>A>>B;
    }
}

