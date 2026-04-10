#include <bits/stdc++.h>
using namespace std;
vector<bool> visited(10);
vector<int> arr;
void v(int A, int B)
{
    if(arr.size() ==B)
    {
        for(int &k: arr)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i = 1; i<=A; i++)
    {
        if(visited[i]){continue;}

        visited[i] = true;
        arr.push_back(i);

        v(A,B);

        arr.pop_back();
        visited[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

     int A,B;
     cin>>A>>B;

     v(A, B);

}