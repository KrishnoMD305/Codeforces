// 315286824	        Apr/13/2025 18:26UTC+6	        Krishno_MD	        1899C - Yarik and Array	        GNU C11	        Accepted	        124 ms	        700 KB

#include<stdio.h>
#include<string.h>

// Krishn0_MD_KUET_CSE

void solution(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0; i<n; i++){scanf("%d",&v[i]);}
    int a=v[0],s=v[0];
    for(int i=1; i<n; i++){
        if(s<0){s=0;}
        if((v[i]%2!=0 && v[i-1]%2==0) || (v[i]%2==0 && v[i-1]%2!=0)){
            s += v[i];
        }else{s = v[i];}
        a = a>s? a:s;
    }
    printf("%d\n",a);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solution();
    }
    return 0;
}
