#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin>>a[i];
    
    int parity = a[0] % 2;
    int cnt = 0;

    for(int i = 1; i < n; i++){
      if(a[i] % 2 == a[i-1] % 2)
        cnt++;
    }

    cout<<cnt<<'\n';
  }

  return 0;
}