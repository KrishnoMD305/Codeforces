# 315532662	        Apr/14/2025 11:08UTC+6	        Krishno_MD	        1899B - 250 Thousand Tons of TNT	        PyPy 3-64	        Accepted	        264 ms	        20600 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    v = list(map(int,input().split()))
    div = []
    i=1
    while i*i<=n:
        if n%i==0:
            div.append(i)
            if i != n/i:
                div.append(n/i)
        i+=1
    a=0
    for num in div:
        maxi,mini,cnt,su = 0, float('inf'),0,0
        for i in v:
            su += i
            cnt+=1
            if cnt==num:
                maxi=max(maxi,su)
                mini=min(mini,su)
                cnt=0
                su=0
        a=max(a,maxi-mini)
    print(a)
