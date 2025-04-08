// 314433734	      Apr/08/2025 07:22UTC+6	    Krishno_MD	      1527B1 - Palindrome Game (easy version)	      C++20 (GCC 13-64)	    Accepted	    109 ms	    100 KB

#include<bits/stdc++.h>
using namespace std;

//Krishno_MD_KUET_CSE

void solution(){
    int n; cin>>n;
    string str; cin>>str;
    int zero = 0;
    for(char i : str){
        if(i=='0'){
            zero++;
        }
    }
    if(zero==1 || zero%2==0){cout<<"BOB\n";}
    else{cout<<"ALICE\n";}
}

int main(){
	int t; cin>>t;
	for(int i=0; i<t; i++){solution();}
	return 0;
}
