#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;

    vector<int> boxes(n);
    for( int i = 0; i < n; i++) cin>>boxes[i];

    if(k > 1) cout<<"YES"<<endl;
    else {
        for(int i = 0; i < n -1; i++){
            if(boxes[i] > boxes[i+1]){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }
}

int main(){
    int t;

    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}