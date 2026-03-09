#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,x,y;
    cin>>A;
    vector<int> X;
    vector<int> Y;
    for(int i = 0; i<A; i++)
    {
        cin>>x>>y;
        X.push_back(x);
        Y.push_back(y);
    }
    int xmin = *min_element(X.begin(),X.end());
    int xmax = *max_element(X.begin(),X.end());
    int ymin = *min_element(Y.begin(),Y.end());
    int ymax = *max_element(Y.begin(),Y.end());
    cout<<(xmax-xmin)*(ymax-ymin);


}
