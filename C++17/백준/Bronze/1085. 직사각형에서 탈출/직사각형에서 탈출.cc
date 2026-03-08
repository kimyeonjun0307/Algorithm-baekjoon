#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y,w,h;
    cin>>x>>y>>w>>h;

    int result1 = h-y;
    int result2 = w-x;
    int result = min({x,y,result1,result2});
    cout<<result;    
}
