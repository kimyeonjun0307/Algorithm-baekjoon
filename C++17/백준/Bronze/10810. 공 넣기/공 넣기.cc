#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

    int basket, shot;
    cin>>basket>>shot;
    int A,B,C;
    vector<int> v(basket);
    for(int i =0; i<shot; i++)
    {
        cin>>A>>B>>C;
        fill(v.begin() + (A-1),v.begin()+(B),C);       
    }
    for(int x: v)
    {
        cout<<x<<" ";
    }
    
}