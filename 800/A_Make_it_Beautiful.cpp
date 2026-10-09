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

    sort(a.begin(), a.end(), greater<int>());

    if(a[0] == a[n-1]){
      cout<<"NO"<<'\n';
      continue;
    }

    if(n > 2 && a[0] == a[1]){
      swap(a[0], a[n-1]);
    }

    cout<<"YES"<<'\n';

    for(int i = 0; i < n; i++){
      cout<<a[i]<<' ';
    }
    cout<<'\n';
  }

  return 0;
}