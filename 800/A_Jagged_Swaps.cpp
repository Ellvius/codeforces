#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) cin>>nums[i];

    if(nums[0] == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t;

    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}