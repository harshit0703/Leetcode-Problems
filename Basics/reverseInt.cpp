#include<iostream>
#include<climits>
using namespace std;

int rev(int n){

    int ans = 0;
    while(n != 0){

        int dig = n % 10;
        n = n/10;

        if(ans > INT_MAX/10 || ans < INT_MIN/10){
            return 0;
        }

        ans = ans*10 + dig;

    }

    return ans;

}

int main()
{
    int n; 
    cin>>n;
    int ans = rev(n);
    cout<<ans;
    return 0;
}