#include <iostream>
using namespace std;


int main()
{
    long A,B;
    cin>>A>>B;
    long sum = 0;
    for (int i = 0; i < B;i++)
    {
        long C,D;
        cin>>C>>D;
        sum += C*D;
    }
    if (sum == A)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
