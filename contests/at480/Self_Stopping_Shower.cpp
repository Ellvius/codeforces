#include<bits/stdc++.h>
using namespace std;


int main(){
  int n, k, t;
  cin>>n>>k>>t;

  vector<int> a(n);

  for(int i = 0; i < n; i++) cin>>a[i];

  long long int time = 0;
  long long sol = 0;
  sort(a.begin(), a.end());
  
  for(int i = 0; i < n && time < t; i++){
    if(a[i] <= time) continue;
    a[i] = min(t, a[i]);

    int tdiff = a[i] - time;
    // cout<<a[i]<<' '<<time<<' '<<tdiff<<endl;

    sol += (tdiff + k -1)/k;

    time = a[i] + k;
  }

  if(time < t){
    int tdiff = t-time;
    sol += (tdiff + k -1)/k;
  }

  cout<<sol<<'\n';

  return 0;
}