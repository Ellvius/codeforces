#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    int i = 1; 
    int cnt = 0;
    while(i <= n){
      for(int j = 1; j < 10; j++){
        if(i*j <= n) cnt++;
      }
      i *= 10;
    }

    cout<<cnt<<'\n';
  }

  return 0;
}