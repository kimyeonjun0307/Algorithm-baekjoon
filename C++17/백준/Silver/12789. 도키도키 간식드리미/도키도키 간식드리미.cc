#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B;
    cin>>A;
    vector<int> v(A);
    stack<int> s;
    for(int i = 0; i<A; i++)
    {
        cin>>v[i];
    }
    int cnt = 1;
    for(int &x: v)
    {
        if(x==cnt)
        {
            cnt++;
        }
        else if(x!=cnt)
        {
            s.push(x);
        }
        while(!s.empty()&&s.top()==cnt)
        {
            cnt++;
            s.pop();
        }
    }
    if(cnt==A+1)
    {
        cout<<"Nice";
    }
    else{cout<<"Sad";}
}