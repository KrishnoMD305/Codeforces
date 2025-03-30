from itertools import product
# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    c = list(map(int,input().split()))
    a1 = sorted(enumerate(a,1),key=lambda x:-x[1])[:3]
    b1 = sorted(enumerate(b,1),key=lambda x:-x[1])[:3]
    c1 = sorted(enumerate(c,1),key=lambda x:-x[1])[:3]
    print(max((x[1]+y[1]+z[1] for x,y,z in product(a1,b1,c1) if x[0] != y[0] and y[0] != z[0] and x[0] != z[0]),default= 0))
