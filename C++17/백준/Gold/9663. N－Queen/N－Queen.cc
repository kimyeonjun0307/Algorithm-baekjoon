#include <bits/stdc++.h>
using namespace std;

int A;
int cnt = 0;
bool y[15];
bool diag1[30];
bool diag2[30];
void DFS(int Depth)
{
    if(Depth == A){cnt++;return;}

    for(int i = 0; i<A; i++)
    {
        if(y[i]||diag1[i+Depth]||diag2[Depth-i+A]){continue;}
        
        y[i] = diag1[i+Depth] = diag2[Depth - i +A] = true;

        DFS(Depth +1);

        y[i] = diag1[i+Depth] = diag2[Depth - i +A] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>A;

    DFS(0);

    cout<<cnt;
}
