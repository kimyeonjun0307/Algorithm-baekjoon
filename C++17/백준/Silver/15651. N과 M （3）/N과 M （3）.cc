#include <bits/stdc++.h>
using namespace std;
int arr[10];
int A, B;
void DFS(int Depth)
{   
    if(B==Depth)
    {
        for(int i = 0; i<B; i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<"\n";
        return;
    }
    for(int i = 1; i<=A; i++)
    {
        arr[Depth] = i;
        DFS(Depth+1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>A>>B;

    DFS(0);
}
