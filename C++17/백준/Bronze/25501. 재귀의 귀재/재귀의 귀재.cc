#include <bits/stdc++.h>
using namespace std;
int cnt;
int recursion(const string& s, int l, int r){
    cnt ++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const string& s){
    return recursion(s, 0, s.size()-1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin>>A;
    
    while(A--)
    {
        string s;
        cin>>s;

        cnt = 0;
        int result = isPalindrome(s);
        cout<< result << " " << cnt<< "\n";
    }
}