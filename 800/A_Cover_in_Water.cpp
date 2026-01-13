#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n>>s;

    int count = 0;

    for (int i = 0; i <= n-3; i++){
        if(s[i] == '.'){
            count++;
            if(s[i+1] == '.' && s[i+2] == '.'){
                cout<<2<<endl;
                return;
            }
        }
    }
    
    if(s[n-1] == '.') count++;
    if(s[n-2] == '.') count++;

    cout<<count<<endl;
}

int main(){
    int t;

    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}