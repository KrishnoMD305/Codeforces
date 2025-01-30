//Using recursion and backtrack to find combinations

#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE
int sum(vector<int> &v,int s[5][5]){
    int s1=s[v[0]-1][v[1]-1]+s[v[1]-1][v[0]-1]+s[v[2]-1][v[3]-1]+s[v[3]-1][v[2]-1];
    int s2=s[v[1]-1][v[2]-1]+s[v[2]-1][v[1]-1]+s[v[3]-1][v[4]-1]+s[v[4]-1][v[3]-1];
    int s3=s[v[2]-1][v[3]-1]+s[v[3]-1][v[2]-1];
    int s4=s[v[3]-1][v[4]-1]+s[v[4]-1][v[3]-1];
    return s1+s2+s3+s4;
}
int permute(vector<int> &v, int s[5][5], int start){
    static int max=-100;
    if(start==v.size()){
        int t=sum(v,s);
        if(t>max){
            max=t;
        }
        return max;
    }
    for(int i=start; i<v.size(); i++){
        swap(v[start],v[i]);
        permute(v,s,start+1);
        swap(v[start],v[i]);
    }
    return max;
}
void solve(){
    vector<int> num={1,2,3,4,5};
    int s[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>s[i][j];
        }
    }
    int result= permute(num,s,0);
    cout<<result<<endl;
}
int main(){solve(); return 0; }
