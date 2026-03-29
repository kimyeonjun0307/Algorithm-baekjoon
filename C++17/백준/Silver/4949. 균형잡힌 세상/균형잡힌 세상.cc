#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string A;
    while(getline(cin,A))
    {        
        if(A==".")
        {
            break;
        }
        bool result = true;        
        stack<char> s;
        for(int i = 0; i<A.size(); i++)
        {
            if(A[i]=='(')
            {
                s.push('(');
            }
            else if(A[i]=='[')
            {
                s.push('[');
            }
            else if(A[i]==']')
            {
                if(s.empty()||s.top()!='[')
                {
                    result = false;
                }
                if(!s.empty()&&s.top()=='[')
                {
                    s.pop();
                }
            }
            else if(A[i]==')')
            {
                if(s.empty()||s.top()!='(')
                {
                    result = false;
                }
                if(!s.empty()&&s.top()=='(')
                {
                    s.pop();
                }
            }
        }
        if(!s.empty()){result = false;}
        if(result)
        {
            cout<<"yes"<<"\n";
        }
        else if(!result)
        {
            cout<<"no"<<"\n";
        }
    }
}