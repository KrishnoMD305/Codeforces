# 316101638	        Apr/18/2025 19:52UTC+6	        Krishno_MD	        1850E - Cardboard for Pictures	        PyPy 3-64	        Accepted	        140 ms	        19100 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,c = map(int,input().split())
    v = list(map(int,input().split()))
    ans,w_min,w_max = -1,1,1e9
    while w_min<=w_max:
        mid,tot = int((w_max+w_min)/2), 0
        for i in v:
            tot += (i+2*mid)**2
            if tot>c:
                break
        if tot==c:
            ans=mid
            break
        if tot>c:
            w_max = mid-1
        else:
            w_min = mid+1
    print(ans)
