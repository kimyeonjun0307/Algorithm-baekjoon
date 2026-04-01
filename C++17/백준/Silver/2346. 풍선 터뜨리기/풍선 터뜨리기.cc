#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    cin >> A;
    vector<int> v(A + 1);
    deque<int> s;
    for (int i = 1; i <= A; i++)
    {
        s.push_back(i);
        cin >> v[i];
    }

    while (!s.empty())
    {
        int temp = s.front();
        cout << s.front() << " "; // 맨 앞자리 출력
        s.pop_front();
        if (s.empty()) break;
        if(v[temp] > 0)
        {
            for (int i = 1; i < v[temp]; i++)
            {
                s.push_back(s.front());
                s.pop_front();
            }
        }
        else if (v[temp] < 0)
        {            
            int k = v[temp] *-1;
            for (int i = 0; i < k; i++)
            {
                s.push_front(s.back());
                s.pop_back();
            }
        }
    }
}