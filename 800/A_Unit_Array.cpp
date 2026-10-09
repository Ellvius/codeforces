#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    int neg = 0;

    for(int i = 0; i < n; i++){
      int x;
      cin>>x;
      if(x == -1) neg++;
    }

    int ans = max(neg - n/2, 0);
    ans = ((neg-ans) % 2 == 0) ? ans: ans + 1;

    cout<<ans<<'\n';
  }

  return 0;
}