
#include <iostream>
using namespace std;


int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if (A == B && B == C)
    {
        cout<<10000+(A*1000)<<endl;
    }
    else if (A == B || B == C || C == A)
    {
        if (A == B)
        {
            cout<<(1000 + (A * 100)) << endl;
        }
        else
        {
            int D = (B == C) ? D = B : D = C;
            cout<<(1000 + (D * 100)) << endl;
        }
    }
    else
    {
        if (A == 6 || B == 6 || C == 6)
        {
            cout<<(600) << endl;
        }
        else if (A == 5 || B == 5 || C == 5)
        {
            cout<<(500) << endl;
        }
        else if (A == 4 || B == 4 || C == 4)
        {
            cout<<(400) << endl;
        }
        else if (A == 3 || B == 3 || C == 3)
        {
            cout<<(300) << endl;
        }
        else if (A == 2 || B == 2 || C == 2)
        {
            cout<<(200) << endl;
        }
        else
        {
            cout<<(100) << endl;
        }
    }
}
