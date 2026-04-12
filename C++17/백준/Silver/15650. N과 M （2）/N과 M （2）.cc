#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
void DFS(int start, int A, int B)
{
    if(arr.size()==B)
    {
        for(int &k: arr)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i = start; i<=A; i++)
    {
        
        arr.push_back(i);
        DFS(i+1, A,B);

        arr.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A,B;
    cin>>A>>B;

    DFS(1, A, B); 


}