#include<bits/stdc++.h>
using namespace std;

bool poweroftwo(int n){

    if(n <= 0){
        return false;
    }

    else if (n == 1){
        return true;
    }

    while(n != 1){
        if(n % 2 == 1){
            return false;
        }
        n = n/2;
    }

    return true;

}

int main()
{
    int n;
    cin>>n;
    bool ans = poweroftwo(n);
    cout<<ans;
    return 0;
}