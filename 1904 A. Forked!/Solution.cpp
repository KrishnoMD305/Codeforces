#include<bits/stdc++.h>
using namespace std;

// Krishno_MD_KUET_CSE

vector<pair<int,int>> move(int x, int y, int a, int b){
    vector<pair<int,int>> m = {
        {x+a, y+b}, {x+a, y-b}, {x-a, y+b}, {x-a, y-b},
        {x+b, y+a}, {x+b, y-a}, {x-b, y+a}, {x-b, y-a}
    };
    return m;
}

void solution(){
    int a,b,xk,yk,xq,yq;
    cin>>a>>b;
    cin>>xk>>yk;
    cin>>xq>>yq;
    vector<pair<int,int>> king = move(xk,yk,a,b);
    vector<pair<int,int>> queen = move(xq,yq,a,b);
    set<pair<int,int>> k_i(king.begin(),king.end()),q_i(queen.begin(),queen.end());
    int cnt = 0;
    for(auto k : k_i){
        for(auto q : q_i){
            if(k==q){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

int main(){int t; cin>>t; while(t--){solution();} return 0;}
