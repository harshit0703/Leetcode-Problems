#include<bits/stdc++.h>
using namespace std;

vector<int> allDup(vector<int>v){

    vector<int> ans;
    unordered_map<int, int>mp;
    for(auto i : v){
        mp[i]++;
    }

    for(auto i : mp){
        if(i.second == 2){
            ans.push_back(i.first);
        }
    }

    return ans;

}

int main()
{
    vector<int>v = {4, 3, 2, 7, 8, 1};
    vector<int> ans = allDup(v);
    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}