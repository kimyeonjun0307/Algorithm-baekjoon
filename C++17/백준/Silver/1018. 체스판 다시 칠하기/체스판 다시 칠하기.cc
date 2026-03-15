#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    cin >> A >> B;
    char arr[50][50];
    // 2차배열에 WB를 입력받고 저장.
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            cin >> arr[i][j];
        }
    }

    int cntmin = INT_MAX;

    for (int k = 0; k <= A - 8; k++) // 최적의 8*8찾기
    {
        for (int m = 0; m <= B - 8; m++)
        {
            int cnt = 0;
            for (int i = k; i < k + 8; i++) // 8*8속 수정 칸 찾기
            {
                for (int j = m; j < m + 8; j++)
                {
                    if ((i + j) % 2 == 0)
                    {
                        if (arr[i][j] != 'B')
                        {
                            cnt++;
                        } // 카운트
                    }
                    else
                    {
                        if (arr[i][j] != 'W')
                        {
                            cnt++;
                        } // 카운트
                    }
                }
            }
            cntmin=min(cntmin,min(cnt,64-cnt));
        }
    }
    cout <<cntmin;
}
