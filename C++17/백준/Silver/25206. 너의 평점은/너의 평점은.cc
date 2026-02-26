#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    string A,C;
    double B,D;
    double sum = 0.0, sum2 = 0.0;

    unordered_map<string, double> grade = {
            {"A+", 4.5},
            {"A0", 4.0},
            {"B+", 3.5},
            {"B0", 3.0},
            {"C+", 2.5},
            {"C0", 2.0},
            {"D+", 1.5},
            {"D0", 1.0},
            {"F", 0.0}            
        };
    
    while(cin>>A>>B>>C)
    {
        if(C=="P")
        {
            continue;
        }
        
        double D = grade[C];
        sum += (B*D);
        sum2 += B;
        
    }
    cout<<fixed;
    cout.precision(6);
    cout<<sum/sum2<<"\n";
}