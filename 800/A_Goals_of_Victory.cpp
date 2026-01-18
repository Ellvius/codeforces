#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> teams(n-1);
    for(int i = 0; i < n-1; i++) cin>>teams[i];

    int sum = 0;

    for(int i: teams) sum+=i;

    cout<<0-sum<<endl;
}

int main(){
    int t;

    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}