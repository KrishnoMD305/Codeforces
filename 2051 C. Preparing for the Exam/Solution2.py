# 311199774	     Mar/18/2025 11:09UTC+6	     Krishno_MD		 PyPy 3-64	     Accepted	     265 ms	     43400 KB

# Krishno_MD_KUET_CSE
test_cases = int(input())
for i in range(test_cases):
    n,m,k = map(int,input().split())
    a = list(map(int,input().split()))
    k = set(map(int,input().split()))
    valid = [False for i in range(n+1)]
    for j in k:
        valid[j] = True
    for p in range(m):
        if n==len(k) or (n-1==len(k) and not valid[a[p]]):
            print("1",end="")
        else:
            print("0",end="")
    print("")
