#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    int mx = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++){
      int x;
      cin>>x;

      if(x == 0) cnt++;
      else {
        mx = max(mx, cnt);
        cnt = 0;
      }
    }

    mx = max(mx, cnt);

    cout<<mx<<'\n';
  }

  return 0;
}