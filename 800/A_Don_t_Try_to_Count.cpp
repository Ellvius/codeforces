#include<bits/stdc++.h>
using namespace std;

bool check(string s, string x){
    if(s.size() > x.size()) return false;

    for(int i = 0; i < x.size() - s.size() + 1; i++){
        if(x.substr(i, s.size()) == s) return true;
    }
    return false;
}

void solve(){
    int n, m;
    cin>>n>>m;

    string x, s;
    cin>>x>>s;

    int ans = -1;

    for(int i = 0; i < 6; i++){
        if(check(s, x)){
            ans = i;
            break;
        }
        x = x + x;
    }

    cout<<ans<<endl;
}

int main(){
    int t;

    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}