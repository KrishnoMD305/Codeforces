// 325063170
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *to_str(long long num){
    char *str = (char*)malloc(20 * sizeof(char));
    if(str != NULL){
        sprintf(str,"%lld",num);
    }
    return str;
}

void solve(){
    long long n; scanf("%lld",&n);
    char *s = to_str(n);
    int ans = strlen(s);
    char div[][2] = {"00","25","50","75"};
    for(int i=0; i<4; i++){
        int p = strlen(s) - 1;
        while(p>=0 && s[p]!=div[i][1]){
            p--;
        }
        if(p<0){continue;}
        p--;
        while(p>=0 && s[p]!=div[i][0]){
            p--;
        }
        if(p<0){continue;}
        int rem = (strlen(s)-1) - p - 1;
        ans = rem<ans ? rem : ans;
    }
    printf("%d\n",ans);
    free(s);
}

int main(){
    int t; 
    scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}
