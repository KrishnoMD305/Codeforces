# 314198807	      Apr/06/2025 11:38UTC+6	      Krishno_MD	      1704C - Virus	      PyPy 3-64	      Accepted	      265 ms	      18200 KB

#Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,m = map(int,input().split())
    inf = list(map(int,input().split()))
    inf.sort()
    gaps = []
    for i in range(0,m):
        if i==m-1:
            gaps.append(n-inf[i]+inf[0]-1)
        else:
            gaps.append(inf[i+1]-inf[i]-1)
    gaps.sort(reverse = True)
    protect = 0
    for i in range(0,len(gaps)):
        gaps[i] -= i*4
        if gaps[i]==1:
            protect += 1
        elif gaps[i]>1:
            protect += (gaps[i]-1)
        else:
            break
    print(n-protect)
