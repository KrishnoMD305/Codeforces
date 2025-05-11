# 319309328	        May/12/2025 03:32UTC+6	        Krishno_MD	        1878C - Vasilije in Cacak	        PyPy 3-64	        Accepted	        156 ms	        3900 KB

# Krishno_Mondol_KUET_CSE

def solve():
    n,k,x = map(int,input().split())
    min_sum = k*(k+1)/2
    max_sum = k*(2*n-k+1)/2
    if x>=min_sum and x<=max_sum:
        print("YES")
    else: 
        print("NO")

test = int(input())
for i in range(test):
    solve()
