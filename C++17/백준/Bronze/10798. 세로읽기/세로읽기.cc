#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> v(5);
    string result;

    for(int i = 0; i<5; i++)
    {
        cin>>v[i];
    }

    for(int j = 0; j < 15; j++)   // 열
    {
        for(int i = 0; i < 5; i++)  // 행
        {
            if(j < v[i].size())
            {
                cout << v[i][j];
            }
        }
    }

}
