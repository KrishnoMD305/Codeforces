# 313630107	      Apr/02/2025       20:59UTC+6	      Krishno_MD	      1793C - Dora and Search	      PyPy 3-64	      Accepted	      280 ms	      19000 KB

#Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    v = list(map(int,input().split()))
    min_val,max_val,start,end = 1,n,0,n-1
    while start<=end:
        if v[start] in (max_val,min_val):
            max_val -= v[start]==max_val
            min_val += v[start]==min_val
            start += 1
        elif v[end] in (max_val,min_val):
            max_val -= v[end]==max_val
            min_val += v[end]==min_val
            end -= 1
        else:
            print(start+1,end+1)
            break
    else:
        print(-1)
