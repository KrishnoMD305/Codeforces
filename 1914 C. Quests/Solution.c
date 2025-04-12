// 315154545	      Apr/12/2025 19:56UTC+6	      Krishno_MD	        1914C - Quests	      C++17 (GCC 7-32)	        Accepted	        109 ms	        0 KB

#include<stdio.h>
#include<string.h>

// Krishn0_MD_KUET_CSE

void solution(){
    int n,k;
    scanf("%d %d",&n,&k);
    int v1[n],v2[n],a[n+1];
    for(int i=0; i<n; i++){scanf("%d",&v1[i]);}
    for(int i=0; i<n; i++){scanf("%d",&v2[i]);}
    a[0] = v2[0];
    for(int i=1; i<n; i++){
        a[i] = a[i-1]>v2[i] ? a[i-1] : v2[i];
    }
    int ans=0, tot=0;
    for(int i=0; i<(n<k?n:k); i++){
        tot += v1[i];
        int l = k-(i+1);
        int f = tot+l*a[i];
        ans = ans>f?ans:f;
    }
    printf("%d\n",ans);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solution();
    }
    return 0;
}
