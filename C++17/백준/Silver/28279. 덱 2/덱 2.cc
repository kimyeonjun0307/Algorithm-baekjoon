#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A,B,C;
    cin>>A;
    deque<int> d;
    for(int i = 0; i<A; i++)
    {
        cin>>B;
        switch(B)
        {
            case 1:
                cin>>C;
                d.push_front(C);
                break;
            case 2:
                cin>>C;
                d.push_back(C);
                break;
            case 3:
                if(!d.empty())
                {
                    cout<<d.front()<<"\n";
                    d.pop_front();
                }
                else{cout<<-1<<"\n";}
                break;
            case 4:
                if(!d.empty())
                {
                    cout<<d.back()<<"\n";
                    d.pop_back();
                }
                else{cout<<-1<<"\n";}
                break;
            case 5:
                cout<<d.size()<<"\n";
                break;
            case 6:
                cout<<(d.empty()?1:0)<<"\n";
                break;
            case 7:
                if(!d.empty())
                {
                    cout<<d.front()<<"\n";
                }
                else{cout<<-1<<"\n";}
                break;
            case 8:
                if(!d.empty())
                {
                    cout<<d.back()<<"\n";
                }
                else{cout<<-1<<"\n";}
        }        
    }
}