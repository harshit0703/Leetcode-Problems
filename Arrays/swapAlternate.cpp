#include<bits/stdc++.h>
using namespace std;

void swapAlt(vector<int>&arr){

    for(int i = 0; i < arr.size(); i = i+2){
        if(i + 1 < arr.size()){
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }

    }

}

int main()
{
    vector<int> arr = {1, 3, 7, 8, 5, 6};
    swapAlt(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}