#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> &costs, int a, int b, int n)
{
    if ((a == 0 && b == 0) || n == 0)
    {
        return 0;
    }

    vector<int> v = costs[n - 1];
    int cityA = v[0];
    int cityB = v[1];

    if (a == 0)
    {
        return solve(costs, a, b - 1, n - 1) + cityB;
    }

    if (b == 0)
    {
        return solve(costs, a - 1, b, n - 1) + cityA;
    }

    int travelA = solve(costs, a - 1, b, n - 1) + cityA;
    int travelB = solve(costs, a, b - 1, n - 1) + cityB;

    return min(travelA, travelB);
}

int twoCitySchedCost(vector<vector<int>> &costs)
{
    int n = costs.size();
    n /= 2;
    return solve(costs, n, n, costs.size());
}

int main()
{
    vector<vector<int>> costs = {{259, 770}, {448, 54}, {926, 667}, {184, 139}, {840, 118}, {577, 469}};

    cout << twoCitySchedCost(costs);

    return 0;
}