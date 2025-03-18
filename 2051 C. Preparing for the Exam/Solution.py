# 311199629	Mar/18/2025 11:07UTC+6	Krishno_MD	2051C - Preparing for the Exam	PyPy 3-64	Accepted	296 ms	43800 KB

# Krishno_MD_KUET_CSE
test_case = int(input())
for i in range(test_case):
    n,m,k = map(int,input().split())
    a = list(map(int,input().split()))
    k = set(map(int,input().split()))
    print("".join("1" if n==len(k) or (n-1==len(k) and x not in k) else "0" for x in a))
