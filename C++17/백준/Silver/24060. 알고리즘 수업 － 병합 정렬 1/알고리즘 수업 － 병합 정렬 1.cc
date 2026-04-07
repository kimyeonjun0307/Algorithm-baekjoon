#include <bits/stdc++.h>
using namespace std;

int N, K;
int cnt = 0;
int answer = -1;

vector<int> tmp;

void merge(vector<int>& A, int p, int q, int r)
{
    int i = p;
    int j = q + 1;
    int t = 0;

    while (i <= q && j <= r)
    {
        if (A[i] <= A[j])
        {
            tmp[t] = A[i];
            i++;
        }
        else
        {
            tmp[t] = A[j];
            j++;
        }

        cnt++;
        if (cnt == K) answer = tmp[t];
        t++;
    }

    while (i <= q)
    {
        tmp[t] = A[i];
        i++;
        cnt++;
        if (cnt == K) answer = tmp[t];
        t++;
    }

    while (j <= r)
    {
        tmp[t] = A[j];
        j++;
        cnt++;
        if (cnt == K) answer = tmp[t];
        t++;
    }

    for (int k = 0; k < t; k++)
    {
        A[p + k] = tmp[k];
    }
}

void merge_sort(vector<int>& A, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> K;

    vector<int> A(N);
    tmp.resize(N);

    for (int i = 0; i < N; i++)
        cin >> A[i];

    merge_sort(A, 0, N - 1);

    cout << answer;
}