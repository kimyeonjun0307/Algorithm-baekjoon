#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B,x;
    cin>>A>>B;
   unordered_set<int> s;
   unordered_set<int> s2;
   s.reserve(A);
   s2.reserve(B);
   for(int i = 0; i<A; i++)
   {
        cin>>x;
        s.insert(x);
   }
   for(int i = 0; i<B; i++)
   {
        cin>>x;
        s2.insert(x);
   }
   int sum = 0;
   for(const int &k: s)
   {
        if(s2.find(k)==s2.end())
        {
            sum++;
        }
   }
   cout<<sum+(B-(A-sum));
}