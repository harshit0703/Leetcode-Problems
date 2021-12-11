#include<bits/stdc++.h>
using namespace std;

int unique(vector<int> arr){

    sort(arr.begin(), arr.end());
    int i;
    for(i = 0; i < arr.size()-1; i+=2){

        if(arr[i] != arr[i+1]){
            return arr[i];
        }

    }

    return arr[i];

}

int main()
{
    vector<int>arr = {1, 3, 1, 3, 6, 6, 7, 10, 7};
    
    //another way of doing this question in through maps print that value whose count is 1

    // unordered_map<int, int>mp;
    // for(auto i : arr){
    //     mp[i]++;
    // }

    // for(auto i : arr){
    //     if(mp[i] == 1){
    //         cout<<i;
    //     }
    // }

    int ans = unique(arr);
    cout<<ans;
    return 0;
}