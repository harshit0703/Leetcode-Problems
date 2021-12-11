#include<bits/stdc++.h>
using namespace std;

int complement(int n){

    string bin = "";

    while(n != 0){
        int dig = n%2;
        n = n/2;
        bin.append(to_string(dig));
    }

    for(auto i : bin){
        if(i == '0'){
            i = '1';
        }else{
            i = '0';
        }
    }

    int com = 
 
}

int main()
{
    int n;
    cin>>n;
    int ans = complement(n);
    cout<<ans;
    return 0;
}