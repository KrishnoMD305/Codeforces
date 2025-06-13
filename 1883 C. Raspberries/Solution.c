// 322703747
#include<stdio.h>
#include<limits.h>
#define min(a,b) ((a)<(b)?(a):(b))
//Krishno_Mondol_KUET_CSE 
void solve(){ 
    int n,k,e=0; scanf("%d %d",&n,&k);
    int v[n];
    for(int i=0; i<n; i++){scanf("%d",&v[i]); if(v[i]%2==0){e++;}}
    int ans = INT_MAX;
    for(int i=0; i<n; i++){ ans = min(ans,(k-(v[i]%k))%k);}
    if(k==4){
        if(e>=2){ans = 0;}
        else if(e==1){ans = min(ans,1);}
        else{ans = min(ans,2);}
    }
    printf("%d\n",ans);
}
int main(){int t; scanf("%d",&t); while(t--){solve();} return 0;}
