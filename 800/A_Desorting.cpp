#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    vector<int> a(n);
    cin>>a[0];
    bool sorted = true;
    int minx = INT_MAX;

    for(int i = 1 ; i < n; i++){
      cin>>a[i];
      if(a[i] < a[i-1]) 
        sorted = false;
      else
        minx = min(minx, a[i] - a[i - 1]);
    }

    if(!sorted){
      cout << 0 << '\n';
      continue;
    } 

    cout<<minx/2 + 1<<'\n';
  }

  return 0;
}