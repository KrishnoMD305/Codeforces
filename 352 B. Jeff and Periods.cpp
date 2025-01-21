#include<bits/stdc++.h>
using namespace std;
//Krishno_MD_KUET_CSE  
void solve(){
    long long i,j,k,n,x,y;
    map<long long,vector<long long>> mp;
    cin>>n;
    for(i=0;i<n;i++){cin>>x; mp[x].push_back(i);}
    vector<pair<long long,long long>> v;
    map<long long,vector<long long>>::iterator p=mp.begin();
    while(p!=mp.end()){
        k=p->first;
        if(mp[k].size()==1){v.push_back({k,0});}
        else{
            set<long long> s;
            for(i=1;i<mp[k].size();i++){s.insert(abs(mp[k][i]-mp[k][i-1])); }
            set<long long>::iterator q=s.begin();
            if(s.size()==1)
            v.push_back({k,*q});
        }
        p++;
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
}
int main(){ solve(); return 0;}
