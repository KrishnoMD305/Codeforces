#include<bits/stdc++.h>
using namespace std;

//Krishno_MD_KUET_CSE

void solution(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0; i<n; i++){cin>>v[i];}
  int min_val=1,max_val=n,start=0,end=n-1;
  int l=-1,r=-1;
  while(start<=end){
    if((v[start]==min_val && v[end]==max_val) || (v[start]==max_val && v[end]==min_val)){
      start++; end--;
      max_val--; min_val++;
    }else if(v[start]==min_val){
      start++;
      min_val++;
    }else if(v[start]==max_val){
      start++;
      max_val--;
    }else if(v[end]==max_val){
      end--;
      max_val--;
    }else if(v[end]==min_val){
      end--;
      min_val++;
    }else{
      l = start+1;
      r = end+1;
      break;
    }
  }
  if(l==-1 && r==-1){cout<<"-1\n";}
  else{cout<<l<<" "<<r<<endl;}
}

int main(){
  int t; cin>>t;
  for(int i=0; i<t; i++){solution();}
  return 0;
}
