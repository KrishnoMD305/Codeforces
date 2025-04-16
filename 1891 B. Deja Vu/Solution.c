// 315790979	        Apr/16/2025 11:34UTC+6	        Krishno_MD	        1891B - Deja Vu	        GNU C11	        Accepted	        1046 ms	        1700 KB

#include<stdio.h>
#include<stdlib.h>

// Krishn0_MD_KUET_CSE

void solution(){
    int n,q; scanf("%d %d",&n,&q);
    long long v1[n],v2[q];
    for(int i=0; i<n; i++){scanf("%lld",&v1[i]);}
    for(int i=0; i<q; i++){scanf("%lld",&v2[i]);}
    int s[32] = {0};
    for(int i=0; i<q; i++){
        if(s[v2[i]]){continue;}
        s[v2[i]] = 1;
        for(int j=0; j<n; j++){
            if(v1[j]%(1<<v2[i])==0){
                v1[j] += (1<<(v2[i]-1));
            }
        }
    }
    for(int i=0; i<n; i++){printf("%lld ",v1[i]);}
    printf("\n");
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solution();
    }
    return 0;
}
