#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    int cnt = 0;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
      cin>>a[i];

      if(a[i] == 2) cnt++;
    }

    if(cnt % 2 == 1){
      cout << -1 << '\n';
      continue;
    }

    int idx = -1;
    cnt /= 2;
    
    for(int i = 0; i < n; i++){
      if(a[i] == 2){
        cnt--;
      }
      if(cnt == 0){
        idx = i;
        break;
      }
    }

    cout<<idx+1<<'\n';
  }

  return 0;
}