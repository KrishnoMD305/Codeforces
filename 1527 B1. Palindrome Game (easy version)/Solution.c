// 314434373	      Apr/08/2025  07:40UTC+6	      Krishno_MD	      1527B1 - Palindrome Game (easy version)	      C++17 (GCC 7-32)	      Accepted	      61 ms	      100 KB

#include <stdio.h>
#include <string.h>

// Krishno_MD_KUET_CSE

void solution(){
	int n;
    scanf("%d", &n);
    char s[1001]; 
    scanf("%s", s);
    int z = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            z++;
        }
    }
    if (z == 1 || z % 2 == 0) {printf("BOB\n");} 
    else {printf("ALICE\n");}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){solution();}
	return 0;
}
