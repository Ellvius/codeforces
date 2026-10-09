#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;

  cin>>t;
  int n;
  int min = INT_MAX;
  for(int i = 0; i < t; i++){
    cin>>n;

    if(abs(n - 0) < min) min = abs(n-0);
  }

  cout<<min<<'\n';

  return 0;
}