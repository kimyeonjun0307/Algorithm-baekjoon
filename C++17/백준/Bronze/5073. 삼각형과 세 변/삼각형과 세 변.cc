#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B,C;
    while(cin>>A>>B>>C)
    {
        int amax= max({A,B,C});
        if(0<(A+B+C-(amax*2)))
        {
            if(A==B&&B==C)
            {
                cout<<"Equilateral"<<"\n";
            }
            else if(A==B || B==C || C==A)
            {
                cout<<"Isosceles"<<"\n";
            }
            else
            {
                cout<<"Scalene"<<"\n";
            }
        }
        else if(A==B &&B==C&& C==0)
        {
            return 0;
        }
        else
        {
            cout<<"Invalid"<<"\n";
        }
    }
    

}

