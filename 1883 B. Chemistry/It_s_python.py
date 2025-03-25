from collections import Counter
# Krishno_MD_KUET_CSE
t = int(input())

for i in range(t):
    n,k = map(int,input().split())
    s = input()

    f = Counter(s)
    odd = [1 for i in f.values() if i%2 != 0]
    
    print("NO" if sum(odd)>k+1 else "YES")
