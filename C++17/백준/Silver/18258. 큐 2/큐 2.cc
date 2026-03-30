#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A,C;
    cin>>A;
    string B;
    queue<int> q;
    for(int i = 0; i<A; i++)
    {
        cin>>B;
        if(B =="push")
        {
            cin>>C;
            q.push(C);
        }
        else if(B=="pop")
        {
            if(q.empty()){cout<<-1<<"\n";}
            else{
                cout<<q.front()<<"\n";
                q.pop();
            }
        }
        else if(B=="size"){cout<<q.size()<<"\n";}
        else if(B=="empty"){
            if(q.empty()){cout<<1<<"\n";}
            else{cout<<0<<"\n";}
        }
        else if(B=="front")
        {
            if(q.empty()){cout<<-1<<"\n";}
            else{cout<<q.front()<<"\n";}
        }
        else if(B=="back")
        {
            if(q.empty())
            {
                cout<<-1<<"\n";
            }
            else{
                cout<<q.back()<<"\n";
            }
        }
    }    
}