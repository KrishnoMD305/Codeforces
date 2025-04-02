# 313630267	    Apr/02/2025     21:00UTC+6	    Krishno_MD	    1793C - Dora and Search	    PyPy 3-64	    Accepted	    218 ms	    20500 KB

#Krishno_MD_KUET_CSE

def solution():
    n = int(input())
    v = list(map(int,input().split()))
    min_val,max_val,start,end,l,r = 1,n,0,n-1,-1,-1
    while start<=end:
        if (v[start]==min_val and v[end]==max_val) or (v[start]==max_val and v[end]==min_val):
            start += 1
            end -= 1
            max_val -= 1
            min_val += 1
        elif v[start]==min_val:
            start += 1
            min_val += 1
        elif v[start]==max_val:
            start += 1
            max_val -= 1
        elif v[end]==max_val:
            end -= 1
            max_val -=1
        elif v[end]==min_val:
            end -= 1
            min_val += 1
        else:
            l = start+1
            r = end+1
            break
    if l==-1 and r==-1:
        print(-1)
    else:
        print(l,r)

if __name__ == "__main__":
  t = int(input())

  for i in range(t):
    solution()
