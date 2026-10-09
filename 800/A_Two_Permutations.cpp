#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int a, b, n;
    cin>>n>>a>>b;

    if((a == b && b == n )|| (n >= (a + b + 2))){
      cout<<"Yes"<<'\n';
    }
    else cout<<"No"<<'\n';
  }

  return 0;
}