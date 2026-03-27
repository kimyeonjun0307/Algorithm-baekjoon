#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    string s;
    cin.ignore();
    for(int i = 0; i<A; i++)
    {                
        bool result = true;
        stack<char> b;
        getline(cin,s);        
        for(char &k: s)
        {
            if(b.empty()&&k==')')
            {
                result = false;
                break;
            }
            else if(!b.empty()&&k==')')
            {
                b.pop();
            }
            else if(k=='(')
            {
                b.push(k);
            }
        }
        if(result==false || !b.empty())
        {
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
}