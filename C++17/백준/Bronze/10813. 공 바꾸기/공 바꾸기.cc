#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

    int basket, change;
    cin>>basket>>change;
    int A,B;
    vector<int> v(basket);
    for(int k =0; k<v.size();k++)
    {
        v[k] =(k+1);
    }
    for(int i =0; i<change; i++)
    {
        cin>>A>>B;
        int temp = v[A-1];
        v[A-1] = v[B-1];
        v[B-1] = temp; // swap(v[A-1],v[B-a]); 이렇게 swap 함수를 써도 된다.
    }
    for(int x: v)
    {
        cout<<x<<" ";
    }
    
}