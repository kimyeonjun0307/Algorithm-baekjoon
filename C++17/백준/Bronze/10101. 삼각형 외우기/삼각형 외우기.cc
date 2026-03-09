#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B,C;
    cin>>A>>B>>C;
    
    int sum = A+B+C;
    if(sum == 180)
    {   

        if(A==B &&B==C)
        {
            cout<<"Equilateral";
        }
        else if( A==B || B==C || C==A)
        {
            cout<<"Isosceles";
        }
        else
        {
            cout<<"Scalene";
        }
    }
    else
    {
        cout<<"Error";
    }

    

}
