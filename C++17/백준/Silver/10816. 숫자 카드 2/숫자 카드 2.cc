#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   int A,B,x;
   cin>>A;
   unordered_map<int,int> m;
   m.reserve(A);
   for(int i = 0; i<A; i++)
   {
        cin>>x;
        m[x]++;
   }
   cin>>B;
   for(int i = 0; i<B; i++)
   {
        cin>>x;
        cout<<m[x]<<" ";
   }

}