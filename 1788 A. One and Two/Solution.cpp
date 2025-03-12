// 310289250                          12 Mar, 2025, 10:53 PM                           Krishno_MD                            62 ms                               100 KB

/* Here only element is 1 and 2. In multiplication there is no concern for 1. Let's think about only 2. There is a characteristics of the number 2.
2*2*2*..... n terms = 2+2+2+.... n terms
So instead of doing multiplication and division we can do addition and substraction for simplicity. 
We check for every k so that the condition can be true.   */



#include<bits/stdc++.h>
using namespace std; 

// Krishno_MD_KUET_CSE
void solve(){
    int n;
    cin>>n;
    long long total = 0;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==2){total += 2;}
    }
    int ind = -1; int h = 0;
    for(int i=0; i<n; i++){   
        if(v[i]==2){h += 2;}
        if(h == total - h){
            ind = i+1;
            break;
        }
    }
    if(ind == -1){
        cout<<"-1\n";
    }else{
        cout<<ind<<endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
