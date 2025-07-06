// 325047144
#include<stdio.h>
#include<string.h>

void solve(){
    char s[105];
    scanf("%s",&s);
    int n = strlen(s);
    if(n==1 || s[0]==s[n-1]){ printf("%s\n",s); }
    else{
        if(s[0]=='a'){s[0]='b';}
        else{s[0]='a';}
        printf("%s\n",s);
    }
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}
