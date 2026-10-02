#include<bits/stdc++.h>
using namespace std;


void goodContest(int n, vector<int>& part){
  auto mini = min_element(part.begin(), part.end());

  cout<<n-*mini<<endl;
}


int main(){
  int t;

  cin>>t;

  for(int i =0; i < t; i++){
    int n;
    cin>>n;

    vector<int> part;
    int num;
    for(int i = 0; i < 3; i++){
      cin>>num;
      part.push_back(num);
    }
    
    goodContest(n, part);
  }

  return 0;
}