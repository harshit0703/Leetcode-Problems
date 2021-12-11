#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {4, 2, 1, 3, 1};
    unordered_map<int, int>mp;
    for(auto i : v){
        mp[i]++;
    }
    for(auto i : v){
        if (mp[i] == 2){
            cout<<i;
            break;
        }
    }
    return 0;
}