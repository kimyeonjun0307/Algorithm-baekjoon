#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int input,A;
    cin>>input;
    A=input;
    int count=1;

    for(int i = 1 ; i<=input; i++) 
    {
        for(int k = (input-i); k>0;k--)
        {
            cout<<" ";
        }
        while((i*2)>count)
        {
            cout<<"*";
            count++;
        }
        count = 1;
        cout<<"\n";
    }
     for(int j = input ; j>1; j--) 
    {
        for(int l = 0;l<input-j+1;l++)
        {
            cout<<" ";
        }
        while(((j*2)-2)>count)
        {
            cout<<"*";
            count++;
        }
        count = 1;
        cout<<"\n";
    }
    return 0;
}   