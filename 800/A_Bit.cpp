#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    int val = 0;
    string s;
    
    while(n--){
        cin>>s;

        if(s[0] == '+' || s[2] == '+') val++;
        else val--;
    }
    cout<<val<<endl;

    return 0;
}