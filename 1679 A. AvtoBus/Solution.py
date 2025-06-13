# 321330926
# Krishno_Mondol_KUET_CSE
def solve(): 
    n = int(input())
    if n%2!=0:
        print("-1")
        return
    mx,mn,m1,m2 = 0,0,False,False
    t1 = n//4
    while t1>=0:
        r = n - 4*t1
        if r%6==0:
            x = r//6
            mx = x+t1
            m1 = True
            break
        t1 -= 1
    t2 = n//6
    while t2>=0:
        r = n - 6*t2
        if r%4==0:
            x = r//4
            mn = x+t2
            m2 = True
            break
        t2 -= 1
    if m1 and m2:
        print(f"{mn} {mx}")
    else:
        print("-1")

t = int(input())
for i in range(t):
    solve()
