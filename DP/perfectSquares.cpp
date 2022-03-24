#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v, int size, int n, int &ans, int moves)
{
    if (size <= 0 || n < 0)
    {
        return;
    }

    if (n == 0)
    {
        ans = min(moves, ans);
    }

    if (v[size - 1] > n)
    {
        solve(v, size - 1, n, ans, moves);
    }

    solve(v, size, n - v[size - 1], ans, moves++);
    solve(v, size - 1, n, ans, moves);
}

int numSquares(int n)
{
    // generate all possible perfect squares less than n as only they can sum up to n

    vector<int> v;
    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
            return 1;
        v.push_back(i * i);
    }

    for (auto i : v)
        cout << i << endl;

    // after getting this vector this question is simply reduced to an unbounded knapsack question

    int ans = INT_MAX;
    solve(v, v.size(), n, ans, 0);
    return ans;
}

int main()
{
    cout << numSquares(40);
    return 0;
}