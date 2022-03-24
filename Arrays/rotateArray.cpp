#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;

    int temp = 0;

    for (int i = 1; i <= k; i++)
    {
        swap(nums[temp++], nums[n - i]);
    }

    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    rotate(v, 3);
    for (auto i : v)
        cout << i << " ";
    return 0;
}