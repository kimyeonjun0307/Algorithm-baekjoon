#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   int A,B;
   cin>>A>>B;
   string x;
    unordered_set<string> s;
    s.reserve(A);
    set<string> v;
    for(int i = 0; i<A; i++)
   {
        cin>>x;
        s.insert(x);
   }
   for(int i = 0; i<B; i++)
   {
        cin>>x;
        if(s.find(x)!=s.end())
        {
            v.insert(x);
        }        
   }
   cout<<v.size()<<"\n";
   for(auto &k : v)
   {
        cout<<k<<"\n";
   }    
}