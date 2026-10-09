#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;

  cin>>t;
  while(t--){
    int a, b, c;
    cin>>a>>b>>c;

    int kt = c/2 + b;
    int an = c - c/2 + a;

    if(an > kt) cout<<"First"<<'\n';
    else if(kt > an) cout<<"Second"<<'\n';
    else cout<<"Second"<<'\n';

  }

  return 0;
}