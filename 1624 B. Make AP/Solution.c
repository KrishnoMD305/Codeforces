// 324975548
#include<stdio.h>
int main(){
    int t; scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if((a+2*(b-a))>=c && (a+2*(b-a))%c==0 && (a+2*(b-a))!=0){printf("YES\n");}
        else if((2*b-c)>=a && (2*b-c)%a==0 && (2*b-c)!=0){printf("YES\n"); }
        else if((a+(c-a)/2)>=b && (c-a)%2==0 && (a+(c-a)/2)%b==0 && (a+(c-a)/2)!=0){printf("YES\n");  }
        else{printf("NO\n");}
    }
}
