#include <bits/stdc++.h>
using namespace std;

string cut(int a)
{
    if(a==1){return"-";}// 재귀 꿀팁??  1. 가장 안 쪽을 타고 들어간 마지막 재귀에서 이프문을 두고 그만 재귀하도록함.

    string left = cut(a/3);// 2.재귀문을 만든다.
    string space(a / 3, ' ');

    return left + space + left;// 3. 1번에서의 값이 문제에 맞게 제대로 작동하도록 리턴
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    while(cin>>A)
    {
        int B = pow(3,A);
        cout<<cut(B)<<"\n";
    }
}