#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,x,y;
    cin>>A;
    int xmax= INT_MIN, xmin = INT_MAX, ymax= INT_MIN, ymin = INT_MAX;
    for(int i = 0; i<A; i++)
    {
        cin>>x>>y;
        xmin= min(xmin,x);
        xmax= max(xmax,x);
        ymin= min(ymin,y);
        ymax= max(ymax,y);
    }
    cout<<(xmax-xmin)*(ymax-ymin);


}
