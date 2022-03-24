#include <bits/stdc++.h>
using namespace std;

void solve(int open, int close, string str, vector<string> &v)
{
    if (open == 0 && close == 0)
    {
        v.push_back(str);
        return;
    }

    if (open == 0)
    {
        solve(open, close - 1, str + ')', v);
    }

    else if (close < open)
    {
        return;
    }

    else
    {
        solve(open - 1, close, str + '(', v);
        solve(open, close - 1, str + ')', v);
    }
}

vector<string> generateParenthesis(int n)
{

    // open brackets = close brackets = n to make a valid string
    // all the valid strings will be starting with an open bracket

    vector<string> v;
    string str = "(";
    solve(n - 1, n, str, v);
    return v;
}

int main()
{
    vector<string> v;
    v = generateParenthesis(8);
    for (auto i : v)
        cout << i << endl;
    return 0;
}