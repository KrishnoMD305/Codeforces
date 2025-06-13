// 323982516
#include<stdio.h>
#include<string.h>
//Krishno_Mondol_KUET_CSE 
void reverseString(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Swap characters
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}
void solve(){ 
    char s1[40],s2[40],ans[50]=""; scanf("%s %s",&s1,&s2);
    int fr[27] = {0};
    for(int i=0; i<strlen(s2); i++){
        fr[s2[i]-'A']++;
    }
    for(int i=strlen(s1)-1; i>=0; i--){
        if(fr[s1[i]-'A']){
            int l = strlen(ans);
            ans[l] = s1[i];
            ans[l+1] = '\0';
            fr[s1[i]-'A']--;
        }
    }
    reverseString(ans);
    strcmp(ans,s2)==0? printf("YES\n"):printf("NO\n");
}
int main(){int t; scanf("%d",&t); while(t--){solve();} return 0;}
