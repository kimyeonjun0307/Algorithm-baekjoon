#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B,C,D;
    cin>>A>>B;
    vector<int> v(A);
    iota(v.begin(),v.end(),1);//시작값부터 자동증가하면서 채운다.(무조건 1씩 증가)

    for (int i=0; i<B; i++)
    {
        cin>>C>>D;
        reverse(v.begin()+(C-1),v.begin()+D);
    }
    for(int x:v)
    {
        cout<<x<<" ";
    }

}