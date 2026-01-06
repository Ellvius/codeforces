#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    int ans = 0;
    int p, v, t;

    while(n--){
        cin>>p>>v>>t;

        if(p + v + t > 1) ans++;
    }

    cout<<ans<<endl;
    return 0;
}