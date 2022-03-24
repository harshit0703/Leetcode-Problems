#include<bits/stdc++.h>
using namespace std;

string remOccr(string str, string part){
    if(part.length() == 0){
        return str;
    }

    int i = 0;
    // string ans = ""; 
    while(i < str.length()){
        string x = str.substr(i, i + part.length());
        int ans = strcmp(x, part);
        if(ans == 0){
            string prev = str.substr(0, i);
            cout<<prev<<endl;
            string next = str.substr(i + part.length() + 1);
            str = prev + next;
            i = 0;
        }
        else{
            i++;
        }
    }

    return str;

}

int main()
{
    string str;
    cin>>str;
    string part;
    cin>>part;
    string ans = remOccr(str, part);
    cout<<ans;
    return 0;
}