// 327803863
#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &a, const pair<int,int> &b){
    return a.second < b.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        long long n,p; cin>>n>>p;
        vector<long long> a(n),b(n);
        for(long long i=0; i<n; i++){cin>>a[i];}
        for(long long i=0; i<n; i++){cin>>b[i];}
        vector<pair<long long,long long>> vec(n);
        for(long long i=0; i<n; i++){
            vec[i].first = a[i];
            vec[i].second = min(b[i],p);
        }
        sort(vec.begin(),vec.end(),cmp);
        if(p<=vec[0].second){
            cout<<p*n<<endl;
            continue;
        }
        long long cost = p, people = 1;
        for(auto i : vec){
            if(people+i.first>=n){
                cost += (n-people)*i.second;
                break;
            }
            people += i.first;
            cost += i.first * i.second;
        }
        cout<<cost<<endl;
    }
    return 0;
}
