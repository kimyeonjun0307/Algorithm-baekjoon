
#include <iostream>
using namespace std;


int main()
{
    int A,B;
    cin>>A>>B;
    int ones = B%10;
    int tens = (B/10)%10;
    int hundreds= (B/100)%10;
    cout<<A*ones<<endl;
    cout<< A*tens<<endl;
    cout<< A*hundreds<<endl;
    cout<< (A * ones)+ (A * tens)*10+ (A * hundreds)*100 <<endl;
    return 0;
}
