#include <bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int> &people, int limit)
{

    sort(people.begin(), people.end());

    // simple two pointer approach

    int st = 0, boats = 0;
    int en = people.size() - 1;

    while (st <= en)
    {
        boats++;
        if (people[st] + people[en] <= limit)
            st++;
        en--;
    }

    return boats;
}

int main()
{
    vector<int> people = {3, 5, 3, 4};
    cout << numRescueBoats(people, 5);
    return 0;
}