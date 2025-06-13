// 321384417
#include<stdio.h>
#include<stdbool.h>
//Krishno_Mondol_KUET_CSE
void solve(){ 
    int n; scanf("%d",&n);
    int v[n]; for(int i=0; i<n; i++){scanf("%d",&v[i]);}
    int cnt = 0; bool vd = false;
    for(int i=n-1; i>0; i--){
        if(v[i]==0){vd=true; break;}
        while(v[i-1]>=v[i]){v[i-1]/=2; cnt++;}
    }
    if(vd){printf("-1\n");}
    else{printf("%d\n",cnt);}
}
int main(){int t; scanf("%d",&t); while(t--){solve();} return 0;}
