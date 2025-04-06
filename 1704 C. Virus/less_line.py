# 314198909	      Apr/06/2025 11:39UTC+6	      Krishno_MD	      1704C - Virus	      PyPy 3-64	      Accepted	      265 ms	      13600 KB

#Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,m = map(int,input().split())
    inf = list(map(int,input().split()))
    inf.sort()
    gaps = [(n-inf[i]+inf[0]-1) if i==m-1 else (inf[i+1]-inf[i]-1) for i in range(m)]
    gaps.sort(reverse = True)
    protect = 0
    for i,g in enumerate(gaps):
        adj = g - i*4
        if adj<=0:
            break
        protect +=1 if adj==1 else (adj-1)
    print(n-protect)
